#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 882127240
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p[5], double p_4, int p_6, unsigned long long p_8,
         short p_11[4])
{
  unsigned long v_19;
  unsigned short v_17;
  unsigned short v_15;
  unsigned long v_13;
  signed char v;
  char result;
  v_19 = (unsigned long)p_8;
  v_17 = (unsigned short)59521;
  v_13 = 3898184472UL;
  v_15 = (unsigned short)p[3];
  result = (char)(((609499168ULL + (unsigned long long)v_13) + (unsigned long long)(
                   (int)v_15 + 67 % (p_6 + 1015))) + (unsigned long long)(
                  (v_13 + 206UL) / (unsigned long)(-29190 / ((int)v_17 + 715) + 857) ^ 
                  (unsigned long)(47568. + p_4) % (v_19 + 351UL)));
  v = (signed char)((unsigned long long)((int)(- p_11[0]) + (int)p[2]));
  result = (char)((61294ULL / (852308700ULL / (unsigned long long)((int)p[2] + 15) + 656ULL) + 
                   (unsigned long long)((int)p_4 % (p_6 + 632)) / (p_8 % 18446744073709544624ULL + 149ULL)) % (
                  ((18446744072671410334ULL * (unsigned long long)result) % 4294902890ULL + (unsigned long long)(
                   (int)(~ v) + (int)((signed char)1.88350811932e+38f))) + 152ULL));
  return result;
}


