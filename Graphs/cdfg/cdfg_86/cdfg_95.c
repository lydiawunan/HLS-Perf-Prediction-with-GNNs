#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 682558670
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p[1][5][1], signed char p_5, signed char p_9,
         unsigned short p_11)
{
  unsigned short v_7;
  char v;
  long result;
  v_7 = (unsigned short)p[0][4][0];
  v = (char)65;
  if ((unsigned long long)((unsigned long)(~ (- v_7)) * ((unsigned long)(- p_9) / 4195908169UL)) >= (
      (unsigned long long)p[0][0][0] | ((18446744072806931332ULL + (unsigned long long)p_11) - (unsigned long long)(
                                        120 + (int)v)))) v = (char)(~ (
                                                         p[0][1][0] * 743U));
  else v = (char)(- ((22586UL & (unsigned long)p[0][2][0]) * (unsigned long)(
                     (int)p_5 + 126)));
  result = (long)(! v);
  return result;
}


