#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1003243287
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, long p_5, signed char p_7, unsigned short p_9,
         unsigned char p_13)
{
  int v_25;
  unsigned char v_23;
  int v_21;
  int v_19;
  unsigned char v_17;
  float v_15;
  unsigned long v_11;
  unsigned long v;
  char result;
  v_25 = -1063054818;
  v_21 = (int)p;
  v_19 = -20717;
  v_17 = (unsigned char)199;
  v_15 = 342.972503662f;
  v_11 = 738798450UL;
  result = (char)p_7;
  while ((int)p_9 % ((int)(- result) + 925) > (int)(15172.f * - (v_15 + (float)v_17))) {
    v_23 = (unsigned char)(p_5 + (long)v_19);
    v_11 = (unsigned long)(- ((int)v_23 / (v_25 + 150) - -1367 * (int)((short)v_15)));
    v_17 = (unsigned char)((long)v_21 % 439587284L);
  }
  while_0_break: ;
  if (v_11 == (unsigned long)((int)p_13 / (- ((int)p_7 % ((int)((signed char)-1.33324371006e+38f) + 109)) + 558))) {
    v = p;
    result = (char)(! (17181LL - (long long)v % -591297111LL));
  }
  else {
    result = (char)95;
    result = (char)(p_5 - (long)((int)p_7 * (int)p_9 + (int)result));
  }
  return result;
}


