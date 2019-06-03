#include "api/wasm/cpp/proxy_wasm_intrinsics.h"

class HeaderTokenContext : public Context {
 public:
  explicit HeaderTokenContext(uint32_t id) : Context(id) {}
  void onStart() override;
  void onCreate() override;

  FilterHeadersStatus onRequestHeaders() override;
};
