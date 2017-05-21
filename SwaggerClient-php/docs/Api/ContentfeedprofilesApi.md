# Swagger\Client\ContentfeedprofilesApi

All URIs are relative to *https://beta-api.indiciummobile.com/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**contentFeedProfilesGet**](ContentfeedprofilesApi.md#contentFeedProfilesGet) | **GET** /content-feed-profiles | finds content feed profiles in the system


# **contentFeedProfilesGet**
> \Swagger\Client\Model\ContentFeedProfile[] contentFeedProfilesGet($limit, $offset)

finds content feed profiles in the system

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\ContentfeedprofilesApi();
$limit = 10; // int | limit of how many objects to fetch
$offset = 0; // int | how many objects to offset from 0

try {
    $result = $api_instance->contentFeedProfilesGet($limit, $offset);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ContentfeedprofilesApi->contentFeedProfilesGet: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **limit** | **int**| limit of how many objects to fetch | [optional] [default to 10]
 **offset** | **int**| how many objects to offset from 0 | [optional] [default to 0]

### Return type

[**\Swagger\Client\Model\ContentFeedProfile[]**](../Model/ContentFeedProfile.md)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

