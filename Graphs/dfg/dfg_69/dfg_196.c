#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 672707654
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p)
{
  unsigned char v_8;
  char v_6;
  unsigned long v_4;
  float v;
  int result;
  v_6 = (char)0;
  v_8 = (unsigned char)0;
  v_4 = (unsigned long)(- ((unsigned int)(- (~ v_6)) % (((unsigned int)(! v_6) + 21778U) + 713U)));
  v = (float)((unsigned long long)((int)((char)((float)v_4 + -1.18296401346e+36f)) * (int)v_6) % (
              ((unsigned long long)v_4 - - ((unsigned long long)v_8 % (
                                            p + 35ULL))) + 437ULL));
  result = (int)v;
  return result;
}


