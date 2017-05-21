# Swagger\Client\ContentApi

All URIs are relative to *https://beta-api.indiciummobile.com/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**contentsGet**](ContentApi.md#contentsGet) | **GET** /contents | finds content in the system
[**contentsIdDelete**](ContentApi.md#contentsIdDelete) | **DELETE** /contents/{id} | delete a content
[**contentsIdGet**](ContentApi.md#contentsIdGet) | **GET** /contents/{id} | gets content by id in the system
[**contentsIdPut**](ContentApi.md#contentsIdPut) | **PUT** /contents/{id} | edit a content with the given id
[**contentsPost**](ContentApi.md#contentsPost) | **POST** /contents | Add a new content to the account


# **contentsGet**
> \Swagger\Client\Model\Content[] contentsGet($limit, $offset)

finds content in the system

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\ContentApi();
$limit = 10; // int | limit of how many objects to fetch
$offset = 0; // int | how many objects to offset from 0

try {
    $result = $api_instance->contentsGet($limit, $offset);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ContentApi->contentsGet: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **limit** | **int**| limit of how many objects to fetch | [optional] [default to 10]
 **offset** | **int**| how many objects to offset from 0 | [optional] [default to 0]

### Return type

[**\Swagger\Client\Model\Content[]**](../Model/Content.md)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **contentsIdDelete**
> contentsIdDelete($id)

delete a content

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\ContentApi();
$id = "id_example"; // string | id of the content to delete

try {
    $api_instance->contentsIdDelete($id);
} catch (Exception $e) {
    echo 'Exception when calling ContentApi->contentsIdDelete: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| id of the content to delete |

### Return type

void (empty response body)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **contentsIdGet**
> \Swagger\Client\Model\Content contentsIdGet($id)

gets content by id in the system

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\ContentApi();
$id = "id_example"; // string | id of content to fetch

try {
    $result = $api_instance->contentsIdGet($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ContentApi->contentsIdGet: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| id of content to fetch |

### Return type

[**\Swagger\Client\Model\Content**](../Model/Content.md)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **contentsIdPut**
> \Swagger\Client\Model\Content contentsIdPut($id, $title, $file, $publish_date, $web_url, $share, $post_date, $unpost_date, $notes_enabled, $notify, $secure, $include_in_feed, $display_thumbnail, $content_folder, $access_groups, $integration_id, $integration_type)

edit a content with the given id

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\ContentApi();
$id = "id_example"; // string | id of content to update
$title = "title_example"; // string | title of the content
$file = "/path/to/file.txt"; // \SplFileObject | file to upload as content
$publish_date = "publish_date_example"; // string | date the content was originally published
$web_url = "web_url_example"; // string | the web url if the content will be a live link
$share = "share_example"; // string | what type of sharing will this content have
$post_date = "post_date_example"; // string | when should this content post to the app. by default it will post immediately. Or it can be set in the future time
$unpost_date = "unpost_date_example"; // string | when should this content be auto removed from the app. by default it will not be removed
$notes_enabled = true; // bool | should notes be enabled. this only applies to pdf files
$notify = true; // bool | should a push notification be sent. by default a push notification is not sent
$secure = true; // bool | if enabled users must enter their email address before viewing this content
$include_in_feed = true; // bool | if enabled the content will be displayed in the news feed
$display_thumbnail = true; // bool | if enabled the content will display a thumbnail
$content_folder = "content_folder_example"; // string | the id of the folder this content will be contained in
$access_groups = array("access_groups_example"); // string[] | the list of groups tagged to this content
$integration_id = "integration_id_example"; // string | optional id to tie the content back to an external system
$integration_type = "integration_type_example"; // string | optional tag to describe what external system the content is integrated with

try {
    $result = $api_instance->contentsIdPut($id, $title, $file, $publish_date, $web_url, $share, $post_date, $unpost_date, $notes_enabled, $notify, $secure, $include_in_feed, $display_thumbnail, $content_folder, $access_groups, $integration_id, $integration_type);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ContentApi->contentsIdPut: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| id of content to update |
 **title** | **string**| title of the content |
 **file** | **\SplFileObject**| file to upload as content | [optional]
 **publish_date** | **string**| date the content was originally published | [optional]
 **web_url** | **string**| the web url if the content will be a live link | [optional]
 **share** | **string**| what type of sharing will this content have | [optional]
 **post_date** | **string**| when should this content post to the app. by default it will post immediately. Or it can be set in the future time | [optional]
 **unpost_date** | **string**| when should this content be auto removed from the app. by default it will not be removed | [optional]
 **notes_enabled** | **bool**| should notes be enabled. this only applies to pdf files | [optional]
 **notify** | **bool**| should a push notification be sent. by default a push notification is not sent | [optional]
 **secure** | **bool**| if enabled users must enter their email address before viewing this content | [optional]
 **include_in_feed** | **bool**| if enabled the content will be displayed in the news feed | [optional]
 **display_thumbnail** | **bool**| if enabled the content will display a thumbnail | [optional]
 **content_folder** | **string**| the id of the folder this content will be contained in | [optional]
 **access_groups** | [**string[]**](../Model/string.md)| the list of groups tagged to this content | [optional]
 **integration_id** | **string**| optional id to tie the content back to an external system | [optional]
 **integration_type** | **string**| optional tag to describe what external system the content is integrated with | [optional]

### Return type

[**\Swagger\Client\Model\Content**](../Model/Content.md)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **contentsPost**
> \Swagger\Client\Model\Content contentsPost($title, $file, $publish_date, $web_url, $share, $post_date, $unpost_date, $notes_enabled, $notify, $secure, $include_in_feed, $display_thumbnail, $content_folder, $access_groups, $integration_id, $integration_type)

Add a new content to the account

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure API key authorization: code
Swagger\Client\Configuration::getDefaultConfiguration()->setApiKey('code', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// Swagger\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('code', 'Bearer');

$api_instance = new Swagger\Client\Api\ContentApi();
$title = "title_example"; // string | title of the content
$file = "/path/to/file.txt"; // \SplFileObject | file to upload as content
$publish_date = "publish_date_example"; // string | date the content was originally published
$web_url = "web_url_example"; // string | the web url if the content will be a live link
$share = "share_example"; // string | what type of sharing will this content have
$post_date = "post_date_example"; // string | when should this content post to the app. by default it will post immediately. Or it can be set in the future time
$unpost_date = "unpost_date_example"; // string | when should this content be auto removed from the app. by default it will not be removed
$notes_enabled = true; // bool | should notes be enabled. this only applies to pdf files
$notify = true; // bool | should a push notification be sent. by default a push notification is not sent
$secure = true; // bool | if enabled users must enter their email address before viewing this content
$include_in_feed = true; // bool | if enabled the content will be displayed in the news feed
$display_thumbnail = true; // bool | if enabled the content will display a thumbnail
$content_folder = "content_folder_example"; // string | the id of the folder this content will be contained in
$access_groups = array("access_groups_example"); // string[] | the list of groups tagged to this conten
$integration_id = "integration_id_example"; // string | optional id to tie the content back to an external system
$integration_type = "integration_type_example"; // string | optional tag to describe what external system the content is integrated with

try {
    $result = $api_instance->contentsPost($title, $file, $publish_date, $web_url, $share, $post_date, $unpost_date, $notes_enabled, $notify, $secure, $include_in_feed, $display_thumbnail, $content_folder, $access_groups, $integration_id, $integration_type);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ContentApi->contentsPost: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **title** | **string**| title of the content |
 **file** | **\SplFileObject**| file to upload as content | [optional]
 **publish_date** | **string**| date the content was originally published | [optional]
 **web_url** | **string**| the web url if the content will be a live link | [optional]
 **share** | **string**| what type of sharing will this content have | [optional]
 **post_date** | **string**| when should this content post to the app. by default it will post immediately. Or it can be set in the future time | [optional]
 **unpost_date** | **string**| when should this content be auto removed from the app. by default it will not be removed | [optional]
 **notes_enabled** | **bool**| should notes be enabled. this only applies to pdf files | [optional]
 **notify** | **bool**| should a push notification be sent. by default a push notification is not sent | [optional]
 **secure** | **bool**| if enabled users must enter their email address before viewing this content | [optional]
 **include_in_feed** | **bool**| if enabled the content will be displayed in the news feed | [optional]
 **display_thumbnail** | **bool**| if enabled the content will display a thumbnail | [optional]
 **content_folder** | **string**| the id of the folder this content will be contained in | [optional]
 **access_groups** | [**string[]**](../Model/string.md)| the list of groups tagged to this conten | [optional]
 **integration_id** | **string**| optional id to tie the content back to an external system | [optional]
 **integration_type** | **string**| optional tag to describe what external system the content is integrated with | [optional]

### Return type

[**\Swagger\Client\Model\Content**](../Model/Content.md)

### Authorization

[code](../../README.md#code)

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

