#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1012260979
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, double p_11, unsigned long p_13, short p_15,
                float p_17)
{
  char v_23;
  int v_21;
  unsigned char v_19;
  signed char v_9;
  long long v_6;
  char v_4;
  signed char v;
  signed char result;
  v_23 = (char)p_15;
  v_19 = (unsigned char)43;
  v_9 = (signed char)12;
  v_6 = -14098LL;
  v_4 = (char)85;
  v = (signed char)113;
  result = (signed char)-111;
  while ((245101674LL - (long long)(- p_13)) % (long long)((int)(! v_4) / 167 + 70) > (long long)p_17) {
    v_21 = (unsigned int)v_19 % 24408U;
    v_19 = (unsigned char)(~ ((unsigned long)(- result) % (p_13 * (unsigned long)v_4 + 478UL)));
    v = (signed char)(! (93 ^ (int)((signed char)(- p_11))));
    v_4 = (char)(((long long)(! v_23) * (v_6 / (long long)(v_21 + 554))) * (long long)(
                 (unsigned long)((int)((char)p_17) + (int)v_23) | (unsigned long)v_9 * 26431UL));
  }
  while_0_break: ;
  while (3374185309U > (unsigned int)(18 / ((3039 + (int)result) / ((int)(~ v) + 757) + 748))) {
    v_9 = (int)v_4 % 87;
    v_4 = (char)((int)p ^ ~ ((int)p_15 & (int)p));
    v = (signed char)((unsigned long)p_11 % (! (- p_13) + 904UL));
    result = (signed char)((v_6 * (long long)v_4 >> ((int)p & 63)) % (long long)(
                           (int)(~ v_9) + 444));
  }
  while_0_break_0: ;
  return result;
}


