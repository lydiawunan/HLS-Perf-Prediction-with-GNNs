#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 914143256
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p, unsigned char p_7, float p_11[2],
                 char p_13, unsigned long p_15)
{
  int v_17;
  int v_9;
  signed char v_5;
  unsigned int v;
  unsigned int result;
  v_17 = 13813;
  v_9 = 434507126;
  v_5 = (signed char)p_15;
  v = 582358182U;
  result = (unsigned int)p_15;
  if ((unsigned long long)p > ((unsigned long long)(- p) % ((43942ULL & (unsigned long long)v_17) + 246ULL) & (unsigned long long)(
                               (unsigned long)((float)v_5 + 6221943296.f) - (
                               p_15 + (unsigned long)v)))) {
    v_9 = (int)(15173U / (unsigned int)(((int)((char)(p_11[0] - (float)v_9)) - (int)p_13) + 81));
    v_5 = (signed char)(! p_7);
    result = (unsigned int)-1.17282120825e+38f + (unsigned int)((int)p_7 % (
                                                                (int)p + 209)) / (
                                                 (unsigned int)v_9 % 4294931480U + 374U);
  }
  else {
    v_5 = (signed char)(p_11[1] - (float)(p_15 % (unsigned long)((int)p_7 + 859) ^ 111UL));
    v = (unsigned int)(~ (~ (~ (unsigned short)9628)));
    v_5 = (signed char)((46096UL & (4294967290UL | (unsigned long)v_5)) / (
                        (unsigned long)-3056121550.97 + 433UL));
  }
  result = (~ result + (unsigned int)(~ p)) % (unsigned int)((int)((signed char)(
                                                             2.95545983401e+38f / (
                                                             (float)v + 321.f))) / (
                                                             (int)(- v_5) + 394) + 972);
  return result;
}


