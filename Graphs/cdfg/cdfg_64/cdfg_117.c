#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 299080052
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p, unsigned long long p_7, unsigned long p_9,
                float p_11[1][5], unsigned long long p_29)
{
  long v_33;
  short v_31;
  float v_27;
  long long v_25;
  signed char v_23;
  unsigned short v_21;
  long long v_19;
  unsigned long long v_17;
  short v_15;
  signed char v_13;
  unsigned int v_4;
  int v;
  signed char result;
  v_33 = 37741L;
  v_31 = (short)p_9;
  v_27 = (float)p_7;
  v_25 = -348731881LL;
  v_23 = (signed char)p_9;
  v_21 = (unsigned short)6159;
  v_19 = 28068LL;
  v_17 = 1002506582ULL;
  v_15 = (short)25212;
  v_13 = (signed char)-85;
  while ((unsigned long long)(! (-94 / ((int)p + 974) >> ((int)(~ v_21) & 31))) >= 
         (unsigned long long)((long long)(- v_23) / (v_25 / -55383LL + 822LL)) + 
         (unsigned long long)((unsigned long)v_27 - 53626UL) % (! p_29 + 910ULL)) {
    v_19 = v_33 + (long)((int)v_31 - -7905);
    v_15 = (short)-4858;
    v_13 = (signed char)((4294951612U % (unsigned int)((int)p + 214) >> (
                          (int)v_13 / -59 & 31)) ^ 132405086U);
    v_25 = (long long)(~ v_15);
  }
  while_0_break: ;
  if ((float)p_9 / (- (p_11[0][3] - (float)v_13) + 442.f) != (float)(
      (unsigned long long)((int)v_15 % ((int)((short)-9604116480.f) + 584)) / (
      (215732527ULL & v_17) + 853ULL) - (unsigned long long)(~ (91LL % (
                                                                v_19 + 105LL))))) {
    v_4 = (unsigned int)p;
    v = (int)(- v_4);
    result = (signed char)v;
  }
  else result = (signed char)56;
  return result;
}


