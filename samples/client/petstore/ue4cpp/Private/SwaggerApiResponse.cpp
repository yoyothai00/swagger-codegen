/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */
#include "SwaggerApiResponse.h"

#include "SwaggerModule.h"
#include "SwaggerHelpers.h"

#include "Templates/SharedPointer.h"

namespace Swagger 
{

void SwaggerApiResponse::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Code.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("code")); WriteJsonValue(Writer, Code.GetValue());	
	}
	if (Type.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("type")); WriteJsonValue(Writer, Type.GetValue());	
	}
	if (Message.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("message")); WriteJsonValue(Writer, Message.GetValue());	
	}
	Writer->WriteObjectEnd();
}

bool SwaggerApiResponse::FromJson(const TSharedPtr<FJsonObject>& JsonObject)
{
	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(JsonObject, TEXT("code"), Code);
	ParseSuccess &= TryGetJsonValue(JsonObject, TEXT("type"), Type);
	ParseSuccess &= TryGetJsonValue(JsonObject, TEXT("message"), Message);

	return ParseSuccess;
}
}
