#pragma once
#include "Inimigo.h"

namespace Entidade {
    namespace Personagem {
        namespace Inimigo {
            class Chefao: public Inimigo
            {
            protected:
                short mudarAtaque;
            public:
                Chefao(Matematica::CoordenadaF posInicio, Jogador::Oriana* pOriana, Ids::Ids id);
                ~Chefao();
            };
        }
    }
}

