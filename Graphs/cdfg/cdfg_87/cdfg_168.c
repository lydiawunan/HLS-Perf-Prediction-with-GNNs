#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 568869063
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, char p_4, unsigned long long p_7,
                  long p_9[3], signed char p_11)
{
  unsigned char v_23;
  long v_21;
  int v_19;
  unsigned short v_17;
  int v_15;
  unsigned long v_13;
  char v;
  unsigned char result;
  v_23 = (unsigned char)p_9[0];
  v_21 = -56575L;
  v_19 = (int)p_11;
  v_17 = (unsigned short)p_7;
  v_15 = -22544517;
  v_13 = (unsigned long)p_7;
  result = (unsigned char)p_9[2];
  while (62111ULL < ((unsigned long long)(((int)p_11 + (int)p_4) + v_15) | 
                     (unsigned long long)((unsigned long)v_17 * 3811628500UL) % (
                     p_7 + 603ULL))) {
    v = (unsigned long)v_23 % (((unsigned long)v_21 - ((unsigned long)v_19 - 4294902787UL)) + 874UL);
    v_19 = (int)(! 16684UL);
    v_21 = (long)((unsigned long long)((unsigned long)(! p_4) % (v_13 + 756UL)) & (
                  (unsigned long long)v_15 ^ 27079ULL / (p_7 + 139ULL)));
    v_15 = (int)((long)(((int)v * (int)result) % ((int)(! p) + 418)) % 359L);
  }
  while_0_break: ;
  if ((unsigned long)(~ p_11) > ! (- v_13 | (unsigned long)(352 / ((int)p_4 + 520)))) 
    result = (unsigned char)(~ ((unsigned int)p * 4294964551U) % (unsigned int)(
                             (int)p_4 + 844));
  else {
    v = (char)(~ 4039217605UL);
    v = (char)(~ (0 % (long long)((int)v + 429)));
    result = (unsigned char)(! (((unsigned long long)v + 942140056ULL) / (unsigned long long)(
                                (long long)p_4 * -36628LL + 896LL)));
  }
  return result;
}


