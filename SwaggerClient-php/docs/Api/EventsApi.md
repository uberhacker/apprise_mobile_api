# Swagger\Client\EventsApi

All URIs are relative to *https://beta-api.indiciummobile.com/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**eventsGet**](EventsApi.md#eventsGet) | **GET** /events | finds events in the system
[**eventsIdDelete**](EventsApi.md#eventsIdDelete) | **DELETE** /events/{id} | delete an event
[**eventsIdGet**](EventsApi.md#eventsIdGet) | **GET** /events/{id} | gets event by id in the system
[**eventsIdPut**](EventsApi.md#eventsIdPut) | **PUT** /events/{id} | edit an event with the given id
[**eventsPost**](EventsApi.md#eventsPost) | **POST** /events | Add a new event to the account


# **eventsGet**
> \Swagger\Client\Model\Event[] eventsGet($limit, $offset)

finds events in the system

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\EventsApi();
$limit = 10; // int | limit of how many objects to fetch
$offset = 0; // int | how many objects to offset from 0

try {
    $result = $api_instance->eventsGet($limit, $offset);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling EventsApi->eventsGet: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **limit** | **int**| limit of how many objects to fetch | [optional] [default to 10]
 **offset** | **int**| how many objects to offset from 0 | [optional] [default to 0]

### Return type

[**\Swagger\Client\Model\Event[]**](../Model/Event.md)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **eventsIdDelete**
> eventsIdDelete($id)

delete an event

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\EventsApi();
$id = "id_example"; // string | id of the event to delete

try {
    $api_instance->eventsIdDelete($id);
} catch (Exception $e) {
    echo 'Exception when calling EventsApi->eventsIdDelete: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| id of the event to delete |

### Return type

void (empty response body)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **eventsIdGet**
> \Swagger\Client\Model\Event eventsIdGet($id)

gets event by id in the system

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\EventsApi();
$id = "id_example"; // string | id of event to fetch

try {
    $result = $api_instance->eventsIdGet($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling EventsApi->eventsIdGet: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| id of event to fetch |

### Return type

[**\Swagger\Client\Model\Event**](../Model/Event.md)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **eventsIdPut**
> \Swagger\Client\Model\Event eventsIdPut($body, $id)

edit an event with the given id

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\EventsApi();
$body = new \Swagger\Client\Model\Event(); // \Swagger\Client\Model\Event | Event object that needs to be edited
$id = "id_example"; // string | id of event to update

try {
    $result = $api_instance->eventsIdPut($body, $id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling EventsApi->eventsIdPut: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**\Swagger\Client\Model\Event**](../Model/\Swagger\Client\Model\Event.md)| Event object that needs to be edited |
 **id** | **string**| id of event to update |

### Return type

[**\Swagger\Client\Model\Event**](../Model/Event.md)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **eventsPost**
> \Swagger\Client\Model\Event eventsPost($body)

Add a new event to the account

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\EventsApi();
$body = new \Swagger\Client\Model\Event(); // \Swagger\Client\Model\Event | Event object that needs to be added to the account

try {
    $result = $api_instance->eventsPost($body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling EventsApi->eventsPost: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**\Swagger\Client\Model\Event**](../Model/\Swagger\Client\Model\Event.md)| Event object that needs to be added to the account |

### Return type

[**\Swagger\Client\Model\Event**](../Model/Event.md)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

