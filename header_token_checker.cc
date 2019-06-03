// NOLINT(namespace-envoy)
#include "header_token_checker.h"

std::unique_ptr<Context> NewContext(uint32_t id) {
  return std::unique_ptr<Context>(new HeaderTokenContext(id));
}

void HeaderTokenContext::onStart() {
  logInfo("onStart");
}

void HeaderTokenContext::onCreate() {
  logInfo("onCreate");
}

FilterHeadersStatus HeaderTokenContext::onRequestHeaders() {
  logInfo("onRequestHeader");
  return FilterHeadersStatus::Continue;
}