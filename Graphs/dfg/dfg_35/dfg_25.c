#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 157005238
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p, short p_4, char p_9[1])
{
  float v_15;
  unsigned long v_13;
  unsigned long v_11;
  unsigned char v_7;
  unsigned int v;
  signed char result;
  v_15 = (float)p_4;
  v_7 = (unsigned char)85;
  v = (unsigned int)p;
  v_13 = (unsigned long)(- (signed char)-79);
  v_11 = (unsigned long)(59193LL / (((912785406LL - (long long)v_13) + (long long)v_15) + 720LL));
  result = (signed char)((unsigned long)p_9[0] ^ ((unsigned long)(((long)p % -677237755L) / (long)(
                                                                  (79 + (int)((unsigned char)7.09984404735e+37)) + 382)) + (
                                                  v_11 + (unsigned long)(
                                                  (int)p | (int)p_4))));
  result = (signed char)(((unsigned int)p | ((unsigned int)(~ result) + (
                                             (unsigned int)p_4 ^ 512110155U))) * - (
                         (v + (unsigned int)v_7) * (unsigned int)result));
  return result;
}


