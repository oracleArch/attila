////////////////////////////////////////////////////////////////////////////////

#pragma once

////////////////////////////////////////////////////////////////////////////////

#include "Items/CppMacro.h"

////////////////////////////////////////////////////////////////////////////////

namespace dxcodegen
{
  namespace Parser
  {
    class MacroExpander
    {
    public:

      MacroExpander(std::vector<Items::CppMacroPtr>& macros, bool verbose=false);
      virtual ~MacroExpander();

      void Expand(std::string& cadena);

    protected:

      std::vector<Items::CppMacroPtr>& m_lstMacros;
      bool m_verbose;

      void MatchMacro(Items::CppMacroPtr macro, std::string& cadena);

    };
  }
}

////////////////////////////////////////////////////////////////////////////////
