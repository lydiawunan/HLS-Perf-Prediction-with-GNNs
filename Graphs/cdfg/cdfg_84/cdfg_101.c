#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 552613993
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p, unsigned long long p_7, short p_9, char p_13,
          float p_19)
{
  unsigned short v_17;
  unsigned long long v_15;
  short v_11;
  unsigned long v_5;
  short v;
  float result;
  v_15 = (unsigned long long)p;
  v_11 = (short)16019;
  v = p_9;
  v_17 = (unsigned short)(v_15 & (unsigned long long)(- p));
  if (v_15 == (unsigned long long)(- ((725870195 << ((int)v_17 & 31)) - (int)(- p_19)))) {
    v_5 = (unsigned long)((3814719270ULL - (p_7 + (unsigned long long)p_9)) ^ (unsigned long long)(
                          (int)v_11 % -718 + (int)(~ v_11)));
    v = (short)(49396ULL / (unsigned long long)(93 * (int)v + 903) - (
                (unsigned long long)p - ((unsigned long long)v_5 & p_7)));
    result = -3.58734370187e+37f / ((float)v + 724.f);
  }
  else result = (float)((int)(~ p_13) ^ (int)p);
  return result;
}


