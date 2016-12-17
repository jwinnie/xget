
#include <stdio.h>
#include <curl/curl.h>
#include <stdlib.h>
#include <unistd.h>

static size_t write_data ( void *ptr, size_t size, size_t nmemb, void *stream ) {
    size_t written = fwrite(ptr, size, nmemb, (FILE *)stream);
    return written;
}
 

int install(char url[]) {

    CURL *curl;
    CURLcode res;
    FILE *output_file;
    static const char *filename = "/tmp/xget";

    curl = curl_easy_init();
    
    if ( curl ) {
    
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        
        output_file = fopen ( filename, "wb" );
        if (output_file) {
            curl_easy_setopt (curl, CURLOPT_WRITEFUNCTION, write_data);
            res = curl_easy_perform(curl);
            
            if ( res != CURLE_OK ) {
                fprintf(stderr, "curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));
            }
            fclose(output_file);
        }
        
        curl_easy_cleanup(curl);
    }
    return 0;
}
