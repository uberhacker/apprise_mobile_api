# Swagger\Client\CalendarsApi

All URIs are relative to *https://beta-api.indiciummobile.com/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**calendarsGet**](CalendarsApi.md#calendarsGet) | **GET** /calendars | finds calendars in the system
[**calendarsIdDelete**](CalendarsApi.md#calendarsIdDelete) | **DELETE** /calendars/{id} | delete a calendar
[**calendarsIdGet**](CalendarsApi.md#calendarsIdGet) | **GET** /calendars/{id} | gets calendar by id in the system
[**calendarsIdPut**](CalendarsApi.md#calendarsIdPut) | **PUT** /calendars/{id} | edit a calendar with the given id
[**calendarsPost**](CalendarsApi.md#calendarsPost) | **POST** /calendars | Add a new calendar to the account


# **calendarsGet**
> \Swagger\Client\Model\Calendar[] calendarsGet($limit, $offset)

finds calendars in the system

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\CalendarsApi();
$limit = 10; // int | limit of how many objects to fetch
$offset = 0; // int | how many objects to offset from 0

try {
    $result = $api_instance->calendarsGet($limit, $offset);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CalendarsApi->calendarsGet: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **limit** | **int**| limit of how many objects to fetch | [optional] [default to 10]
 **offset** | **int**| how many objects to offset from 0 | [optional] [default to 0]

### Return type

[**\Swagger\Client\Model\Calendar[]**](../Model/Calendar.md)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **calendarsIdDelete**
> calendarsIdDelete($id)

delete a calendar

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\CalendarsApi();
$id = "id_example"; // string | id of the calendar to delete

try {
    $api_instance->calendarsIdDelete($id);
} catch (Exception $e) {
    echo 'Exception when calling CalendarsApi->calendarsIdDelete: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| id of the calendar to delete |

### Return type

void (empty response body)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **calendarsIdGet**
> \Swagger\Client\Model\Calendar calendarsIdGet($id)

gets calendar by id in the system

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\CalendarsApi();
$id = "id_example"; // string | id of calendar to fetch

try {
    $result = $api_instance->calendarsIdGet($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CalendarsApi->calendarsIdGet: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| id of calendar to fetch |

### Return type

[**\Swagger\Client\Model\Calendar**](../Model/Calendar.md)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **calendarsIdPut**
> \Swagger\Client\Model\Calendar calendarsIdPut($body, $id)

edit a calendar with the given id

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\CalendarsApi();
$body = new \Swagger\Client\Model\Calendar(); // \Swagger\Client\Model\Calendar | Calendar object that needs to be edited
$id = "id_example"; // string | id of calendar to update

try {
    $result = $api_instance->calendarsIdPut($body, $id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CalendarsApi->calendarsIdPut: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**\Swagger\Client\Model\Calendar**](../Model/\Swagger\Client\Model\Calendar.md)| Calendar object that needs to be edited |
 **id** | **string**| id of calendar to update |

### Return type

[**\Swagger\Client\Model\Calendar**](../Model/Calendar.md)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **calendarsPost**
> \Swagger\Client\Model\Calendar calendarsPost($body)

Add a new calendar to the account

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\CalendarsApi();
$body = new \Swagger\Client\Model\Calendar(); // \Swagger\Client\Model\Calendar | Calendar object that needs to be added to the account

try {
    $result = $api_instance->calendarsPost($body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CalendarsApi->calendarsPost: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**\Swagger\Client\Model\Calendar**](../Model/\Swagger\Client\Model\Calendar.md)| Calendar object that needs to be added to the account |

### Return type

[**\Swagger\Client\Model\Calendar**](../Model/Calendar.md)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

