#include <stdio.h>
#include <curl/curl.h>

int main() {
    CURL *curl;
    CURLcode response;
    curl_global_init(CURL_GLOBAL_ALL);
    char *url = "https://usth.edu.vn/en/timetable/bachelor-1/bachelor-1-of-three-year-program-13.html";
    printf(url);
    curl = curl_easy_init();
    if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url);
        response = curl_easy_perform(curl);
        if(response != CURLE_OK) {
            fprintf(stderr, "Request failed: %s\n", curl_easy_strerror(response));
        } else {
            printf("%s\n",response);
        }
        curl_easy_cleanup(curl);
    }
    curl_global_cleanup();
    return 0;
}
