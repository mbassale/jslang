#include "llvm/Support/InitLLVM.h"
#include "llvm/Support/raw_ostream.h"
#include "jslang/Basic/Version.h"

int main(int argc_, const char **argv_)
{
  llvm::InitLLVM X(argc_, argv_);
  llvm::outs() << "JSLang " << jslang::getJSLangVersion() << " by Marco Bassaletti <github.com/mbassale>\n";
}
