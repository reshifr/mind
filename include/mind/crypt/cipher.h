#ifndef CRYPT_CIPHER_H
#define CRYPT_CIPHER_H 1

#include "mind/types.h"
#include "mind/crypt/rand.h"
#include "mind/crypt/xchacha20poly1305.h"

namespace mind {

/**
 * \brief Abstract cipher
 * \tparam H The hash function used to derive the key from the secret
 * \tparam Rd The random number generator
 * \tparam Cp The cipher
 * \note `L` must be greater than 0.
 */
template <
  template <u L, class Slt> class H,
  template <u L> class Rd=rand, class Cp=xchacha20poly1305<H, Rd>>
using cipher = Cp;

} // namespace mind

#endif // MIND_CRYPT_HASH_H
