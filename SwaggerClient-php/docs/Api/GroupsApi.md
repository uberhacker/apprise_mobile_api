# Swagger\Client\GroupsApi

All URIs are relative to *https://beta-api.indiciummobile.com/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**groupsGet**](GroupsApi.md#groupsGet) | **GET** /groups | finds groups in the system
[**groupsIdGet**](GroupsApi.md#groupsIdGet) | **GET** /groups/{id} | gets a group by id in the system


# **groupsGet**
> \Swagger\Client\Model\Group[] groupsGet($limit, $offset)

finds groups in the system

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\GroupsApi();
$limit = 10; // int | limit of how many objects to fetch
$offset = 0; // int | how many objects to offset from 0

try {
    $result = $api_instance->groupsGet($limit, $offset);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling GroupsApi->groupsGet: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **limit** | **int**| limit of how many objects to fetch | [optional] [default to 10]
 **offset** | **int**| how many objects to offset from 0 | [optional] [default to 0]

### Return type

[**\Swagger\Client\Model\Group[]**](../Model/Group.md)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **groupsIdGet**
> \Swagger\Client\Model\Group groupsIdGet($id)

gets a group by id in the system

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\GroupsApi();
$id = "id_example"; // string | id of group to fetch

try {
    $result = $api_instance->groupsIdGet($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling GroupsApi->groupsIdGet: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| id of group to fetch |

### Return type

[**\Swagger\Client\Model\Group**](../Model/Group.md)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

