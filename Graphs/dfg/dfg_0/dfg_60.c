//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 716530219
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p[1], double p_9, char p_11, long p_15,
                       unsigned char p_17)
{
  unsigned char v_19;
  unsigned int v_13;
  short v_7;
  float v_5;
  unsigned long long v;
  unsigned long long result;
  v_19 = (unsigned char)41;
  v_13 = p[0];
  v_5 = (float)p[0];
  v = (unsigned long long)p_15;
  v_19 = v_19;
  v = (! (550782728ULL - (unsigned long long)p[0]) + - v / 78ULL) - (unsigned long long)(
      ((unsigned int)((int)p_17 + 68) | p[0]) / (unsigned int)((int)v_19 + 608));
  v_7 = (short)(~ ((unsigned long long)((float)(! p_15) * 4.644333083e+37f) + (
                   (unsigned long long)p_11 - (20ULL + v))));
  result = (unsigned long long)((unsigned long)((long)(227887935 >> (
                                                       v * (unsigned long long)p[0] & 31ULL)) / (
                                                (0L - (long)(20 % ((int)((char)v_5) + 740))) + 24L)) - (unsigned long)(
                                (unsigned int)((double)v_7 / (p_9 + 431.)) - 
                                (unsigned int)p_9 * ((unsigned int)p_11 % (
                                                     v_13 + 633U))));
  return result;
}


