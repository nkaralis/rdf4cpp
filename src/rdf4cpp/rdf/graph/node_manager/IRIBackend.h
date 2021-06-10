#ifndef RDF4CPP_IRIBACKEND_H
#define RDF4CPP_IRIBACKEND_H

#include <rdf4cpp/rdf/graph/node_manager/NodeID.h>

#include <compare>
#include <string>

namespace rdf4cpp::rdf::graph::node_manager {
class IRIBackend {
    std::string iri;

public:
    explicit IRIBackend(std::string iri);
    // TODO: handle normalization in comparison
    auto operator<=>(const IRIBackend &) const = default;
    std::strong_ordering operator<=>(IRIBackend const *other) const;

    [[nodiscard]] std::string as_string(bool quoting) const;
};
}  // namespace rdf4cpp::rdf::graph::node_manager

#endif  //RDF4CPP_IRIBACKEND_H
