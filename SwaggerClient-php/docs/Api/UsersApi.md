# Swagger\Client\UsersApi

All URIs are relative to *https://beta-api.indiciummobile.com/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**usersBulkCsvPost**](UsersApi.md#usersBulkCsvPost) | **POST** /users/bulk-csv | Upload a csv to add users to the platform


# **usersBulkCsvPost**
> \Swagger\Client\Model\InlineResponse200 usersBulkCsvPost($file, $dont_remove_members)

Upload a csv to add users to the platform

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\UsersApi();
$file = "/path/to/file.txt"; // \SplFileObject | csv file of users to upload. The file needs to contain two columns. The first column will be your users' unique identifiers. The second column will be the name of the group the user is in. If the user is in multiple groups they can be in multiple rows in the csv
$dont_remove_members = true; // bool | wheather or not to remove members

try {
    $result = $api_instance->usersBulkCsvPost($file, $dont_remove_members);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling UsersApi->usersBulkCsvPost: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **file** | **\SplFileObject**| csv file of users to upload. The file needs to contain two columns. The first column will be your users&#39; unique identifiers. The second column will be the name of the group the user is in. If the user is in multiple groups they can be in multiple rows in the csv |
 **dont_remove_members** | **bool**| wheather or not to remove members | [optional]

### Return type

[**\Swagger\Client\Model\InlineResponse200**](../Model/InlineResponse200.md)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

