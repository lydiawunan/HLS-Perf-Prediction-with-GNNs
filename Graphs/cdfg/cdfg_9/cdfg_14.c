#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 606716638
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, unsigned long long p_9)
{
  long v_17;
  unsigned long v_15;
  unsigned char v_13;
  float v_11;
  char v_7;
  float v_4;
  long v;
  unsigned int result;
  v_17 = 18141L;
  v_15 = 4294917532UL;
  v_13 = (unsigned char)p_9;
  v_7 = (char)-119;
  v_4 = -583.130065918f;
  v = 11298L;
  result = (unsigned int)p;
  if (p_9 == (unsigned long long)(((long)p + -54765L) + (long)((int)p * 15068)) - 
             (unsigned long long)((unsigned int)v_13 % (result + 731U)) * (
             18446744073709501323ULL % (p_9 + 540ULL))) {
    v_7 = (char)16;
    v = 33L;
    result = (unsigned int)(((unsigned long long)v / (! p_9 + 803ULL)) * (unsigned long long)(! (
                            -65 * (int)v_13)));
  }
  else {
    v_15 = (unsigned long)p;
    v_17 = (long)(- v_4);
    v_13 = (unsigned char)(p_9 * 18446744073709520277ULL);
  }
  while ((unsigned long long)((unsigned long)(- v) % (unsigned long)(
                              ((int)((char)(v_4 - 2424.f)) + (int)(! p)) + 305)) == 
         (unsigned long long)(- v_7) - p_9) {
    v_11 = (int)v_13 / 198;
    v_13 = (unsigned char)(0 / (long long)(v_17 + 365L));
    v_4 = (float)(v_15 - 4025042782UL) * v_11 - (float)(- p_9);
    v = (long)(p_9 * (unsigned long long)((int)p % 189) ^ 24527ULL);
  }
  while_0_break: ;
  return result;
}


