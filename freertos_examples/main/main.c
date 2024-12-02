#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

#include "freertos/FreeRTOS.h"
#include "freertos/projdefs.h"
#include "freertos/task.h"
#include "esp_log.h"

const char *TAG = "main";


uint8_t button = 0;


void app_main(void)
{
    while (true) 
    {
		
		ESP_LOGI(TAG, "Hola desde el main");

        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
