# Swagger\Client\ContentthumbnailApi

All URIs are relative to *https://beta-api.indiciummobile.com/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**contentsIdThumbnailPost**](ContentthumbnailApi.md#contentsIdThumbnailPost) | **POST** /contents/{id}/thumbnail | add a thumbnail to content with the given id


# **contentsIdThumbnailPost**
> \Swagger\Client\Model\Content contentsIdThumbnailPost($id, $file)

add a thumbnail to content with the given id

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\ContentthumbnailApi();
$id = "id_example"; // string | id of content to add a thumbnail to
$file = "/path/to/file.txt"; // \SplFileObject | image file to upload as a thumbnail

try {
    $result = $api_instance->contentsIdThumbnailPost($id, $file);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ContentthumbnailApi->contentsIdThumbnailPost: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| id of content to add a thumbnail to |
 **file** | **\SplFileObject**| image file to upload as a thumbnail | [optional]

### Return type

[**\Swagger\Client\Model\Content**](../Model/Content.md)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

