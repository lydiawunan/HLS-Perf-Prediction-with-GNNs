//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 701063018
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p, char p_5, float p_9, char p_11, float p_13)
{
  float v_17;
  unsigned int v_15;
  char v_7;
  unsigned int v;
  int result;
  v_17 = 1.147612607e+38f;
  v_7 = (char)89;
  result = (int)p_11;
  v_7 = (char)(- ((unsigned int)(((int)((char)2.00786869969e+38f) - (int)p_5) % (
                                 (int)(~ v_7) + 724)) + (30320096U - (unsigned int)(
                                                         p_9 - v_17))));
  v_15 = (unsigned int)((float)((18446744073709551495ULL | ((unsigned long long)p_5 - p)) + (unsigned long long)(
                                (unsigned int)result * 33558U - (unsigned int)v_7)) + 
                        p_13 / ((float)((int)(~ p_5) | (int)(! p_5)) + 500.f));
  v = (unsigned int)(- (- (p_13 * p_9)) + (float)(56457ULL * (794300650ULL * (unsigned long long)p_13) - 
                                                  (unsigned long long)v_15 * (
                                                  521ULL / (unsigned long long)(
                                                  (int)p_11 + 341))));
  result = (int)((! ((unsigned long long)v * p) & (unsigned long long)(
                  (-77035064 | (int)p_5) / (((int)((char)75338793.8503) ^ (int)v_7) + 722))) >> (
                 (int)((char)p_9) * (int)p_11 & 63));
  return result;
}


