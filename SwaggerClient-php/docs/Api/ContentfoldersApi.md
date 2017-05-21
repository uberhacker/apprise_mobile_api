# Swagger\Client\ContentfoldersApi

All URIs are relative to *https://beta-api.indiciummobile.com/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**contentFoldersGet**](ContentfoldersApi.md#contentFoldersGet) | **GET** /content-folders | finds content folders in the system
[**contentFoldersIdDelete**](ContentfoldersApi.md#contentFoldersIdDelete) | **DELETE** /content-folders/{id} | delete a content folder
[**contentFoldersIdGet**](ContentfoldersApi.md#contentFoldersIdGet) | **GET** /content-folders/{id} | gets content folder by id in the system
[**contentFoldersIdPut**](ContentfoldersApi.md#contentFoldersIdPut) | **PUT** /content-folders/{id} | edit a content folder with the given id
[**contentFoldersPost**](ContentfoldersApi.md#contentFoldersPost) | **POST** /content-folders | Add a new content folder to the account


# **contentFoldersGet**
> \Swagger\Client\Model\ContentFolder[] contentFoldersGet($limit, $offset)

finds content folders in the system

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\ContentfoldersApi();
$limit = 10; // int | limit of how many objects to fetch
$offset = 0; // int | how many objects to offset from 0

try {
    $result = $api_instance->contentFoldersGet($limit, $offset);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ContentfoldersApi->contentFoldersGet: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **limit** | **int**| limit of how many objects to fetch | [optional] [default to 10]
 **offset** | **int**| how many objects to offset from 0 | [optional] [default to 0]

### Return type

[**\Swagger\Client\Model\ContentFolder[]**](../Model/ContentFolder.md)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **contentFoldersIdDelete**
> contentFoldersIdDelete($id)

delete a content folder

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\ContentfoldersApi();
$id = "id_example"; // string | id of the content folder to delete

try {
    $api_instance->contentFoldersIdDelete($id);
} catch (Exception $e) {
    echo 'Exception when calling ContentfoldersApi->contentFoldersIdDelete: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| id of the content folder to delete |

### Return type

void (empty response body)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **contentFoldersIdGet**
> \Swagger\Client\Model\ContentFolder contentFoldersIdGet($id)

gets content folder by id in the system

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\ContentfoldersApi();
$id = "id_example"; // string | id of content folder to fetch

try {
    $result = $api_instance->contentFoldersIdGet($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ContentfoldersApi->contentFoldersIdGet: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| id of content folder to fetch |

### Return type

[**\Swagger\Client\Model\ContentFolder**](../Model/ContentFolder.md)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **contentFoldersIdPut**
> \Swagger\Client\Model\ContentFolder contentFoldersIdPut($body, $id)

edit a content folder with the given id

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\ContentfoldersApi();
$body = new \Swagger\Client\Model\ContentFolder(); // \Swagger\Client\Model\ContentFolder | content folder object that needs to be edited
$id = "id_example"; // string | id of content folder to update

try {
    $result = $api_instance->contentFoldersIdPut($body, $id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ContentfoldersApi->contentFoldersIdPut: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**\Swagger\Client\Model\ContentFolder**](../Model/\Swagger\Client\Model\ContentFolder.md)| content folder object that needs to be edited |
 **id** | **string**| id of content folder to update |

### Return type

[**\Swagger\Client\Model\ContentFolder**](../Model/ContentFolder.md)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **contentFoldersPost**
> \Swagger\Client\Model\ContentFolder contentFoldersPost($body)

Add a new content folder to the account

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\ContentfoldersApi();
$body = new \Swagger\Client\Model\ContentFolder(); // \Swagger\Client\Model\ContentFolder | ContentFolder object that needs to be added to the account

try {
    $result = $api_instance->contentFoldersPost($body);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ContentfoldersApi->contentFoldersPost: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**\Swagger\Client\Model\ContentFolder**](../Model/\Swagger\Client\Model\ContentFolder.md)| ContentFolder object that needs to be added to the account |

### Return type

[**\Swagger\Client\Model\ContentFolder**](../Model/ContentFolder.md)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

