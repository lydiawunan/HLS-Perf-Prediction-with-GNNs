#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 926747501
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(char p)
{
  double v_5;
  char v;
  unsigned long long result;
  v = (char)50;
  result = (unsigned long long)p;
  v_5 = (double)(~ (! (result ^ (unsigned long long)((int)((char)-1.03849489843e+36) / (
                                                     (int)v + 51)))));
  v = (char)(- ((int)((char)v_5) + (int)(- p)));
  result = (unsigned long long)(~ (! ((unsigned int)2.72271086802e+38f % 19429U)) / (unsigned int)(
                                (int)v % ((int)(! (~ p)) + 385) + 903));
  return result;
}


