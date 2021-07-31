#pragma once

#include "LibLsp/JsonRpc/RequestInMessage.h"
#include "LibLsp/JsonRpc/lsResponseMessage.h"


struct GetClassParams
{
	std::vector<std::string> pre_nodes;
	MAKE_SWAP_METHOD(GetClassParams, pre_nodes)
};

MAKE_REFLECT_STRUCT(GetClassParams, pre_nodes);

/**
 * The workspace/configuration request is sent from the server to the client to fetch
 * configuration settings from the client. The request can fetch n configuration settings
 * in one roundtrip. The order of the returned configuration settings correspond to the
 * order of the passed ConfigurationItems (e.g. the first item in the response is the
 * result for the first configuration item in the params).
 */
DEFINE_REQUEST_RESPONSE_TYPE(WorkspaceGetClasses, GetClassParams, std::vector<std::string>, "workspace/getclasses");