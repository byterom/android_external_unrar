#ifndef _RAR_FILESTR_
#define _RAR_FILESTR_

bool ReadTextFile(
  const char *Name,
#ifndef __BIONIC__
  const wchar *NameW,
#endif
  StringList *List,
  bool Config,
  bool AbortOnError=false,
  RAR_CHARSET SrcCharset=RCH_DEFAULT,
  bool Unquote=false,
  bool SkipComments=false,
  bool ExpandEnvStr=false
);

#endif
