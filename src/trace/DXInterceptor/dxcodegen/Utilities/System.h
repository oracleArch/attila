////////////////////////////////////////////////////////////////////////////////

#pragma once

////////////////////////////////////////////////////////////////////////////////

namespace dxcodegen
{
  namespace Utilities
  {
    class System
    {
    public:
      
      static bool ReadEnvironmentVariable(std::string varName, std::string& varValue);
      static std::string GetCurrentDateTime();

    };
  }
}

////////////////////////////////////////////////////////////////////////////////
