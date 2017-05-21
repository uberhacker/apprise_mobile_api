# Swagger\Client\DirectoryApi

All URIs are relative to *https://beta-api.indiciummobile.com/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**directoryAccountCsvPost**](DirectoryApi.md#directoryAccountCsvPost) | **POST** /directory/account-csv | Upload a csv to add directories and directory entries to the platform
[**directorySingleCsvPost**](DirectoryApi.md#directorySingleCsvPost) | **POST** /directory/single-csv | Upload a csv to a specific directory


# **directoryAccountCsvPost**
> \Swagger\Client\Model\InlineResponse200 directoryAccountCsvPost($file)

Upload a csv to add directories and directory entries to the platform

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\DirectoryApi();
$file = "/path/to/file.txt"; // \SplFileObject | csv of entries to upload

try {
    $result = $api_instance->directoryAccountCsvPost($file);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DirectoryApi->directoryAccountCsvPost: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **file** | **\SplFileObject**| csv of entries to upload |

### Return type

[**\Swagger\Client\Model\InlineResponse200**](../Model/InlineResponse200.md)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **directorySingleCsvPost**
> \Swagger\Client\Model\InlineResponse200 directorySingleCsvPost($file, $directory_name)

Upload a csv to a specific directory

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\DirectoryApi();
$file = "/path/to/file.txt"; // \SplFileObject | csv of entries to upload
$directory_name = "directory_name_example"; // string | name of the directory to upload to

try {
    $result = $api_instance->directorySingleCsvPost($file, $directory_name);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DirectoryApi->directorySingleCsvPost: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **file** | **\SplFileObject**| csv of entries to upload |
 **directory_name** | **string**| name of the directory to upload to |

### Return type

[**\Swagger\Client\Model\InlineResponse200**](../Model/InlineResponse200.md)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

