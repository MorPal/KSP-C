// Tests for explore spacecenter and Vessel
#include <iostream>
#include <krpc.hpp>
#include <krpc/services/krpc.hpp>
#include <krpc/services/space_center.hpp>

int main() {
  auto conn = krpc::connect();
  krcp::services::KRCP krcp(&conn);
  krpc::services::SpaceCenter sc(&conn);
}
