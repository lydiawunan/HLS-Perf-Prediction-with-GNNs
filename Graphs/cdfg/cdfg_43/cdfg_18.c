#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 89823510
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p, float p_4, long p_11, unsigned long long p_15[4][4][3],
         long long p_17)
{
  long long v_21;
  int v_19;
  unsigned short v_13;
  unsigned long v_9;
  unsigned long v_7;
  unsigned short v;
  char result;
  v_21 = -288473338LL;
  v_19 = -859677390;
  v = (unsigned short)p_17;
  result = (char)-86;
  if ((double)(! v_19) * ((-8200516041. + (double)p_11) + (double)(v_21 + (long long)p_11)) != (double)(
      48ULL + (unsigned long long)(~ result))) {
    v_13 = (unsigned short)(4294910333. * (-247.55786036 / ((double)(! v) + 830.)));
    v_9 = (unsigned long)(3877777799LL * ((long long)((long)v_13 / (p_11 + 703L)) + 164LL));
    v_7 = (unsigned long)p_11;
  }
  else {
    v_9 = (unsigned long)p_11;
    v = (unsigned short)((unsigned long long)(~ (-740071331LL | (long long)v_9)) / (
                         (p_15[1][0][0] * (unsigned long long)p_17) / 431ULL + 149ULL));
    v_7 = (unsigned long)(- (626362729ULL / (unsigned long long)(50 / (
                                                                 (int)((char)p_4) + 943) + 842)));
  }
  if ((unsigned long)v >= (~ v_7 - v_9) % (unsigned long)(p_11 % -1275141883L + 948L)) 
    result = p;
  else result = (char)p_4;
  return result;
}


