#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 580215129
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(float p, unsigned long p_11, char p_17)
{
  unsigned long v_21;
  unsigned int v_19;
  signed char v_15;
  int v_13;
  unsigned int v_9;
  int v_6;
  long v_4;
  unsigned char v;
  unsigned short result;
  v_21 = (unsigned long)p_17;
  v_19 = (unsigned int)p_11;
  v_15 = (signed char)115;
  v_13 = (int)p_17;
  v_9 = 751151370U;
  v_6 = -1036215506;
  v_4 = 15890L;
  v = (unsigned char)p_11;
  while (~ (-551390661LL + (long long)(- v_4)) > (long long)((unsigned long)(
                                                             27468 * ~ v_6) + 
                                                             (unsigned long)(
                                                             (unsigned int)p % (
                                                             v_9 + 663U)) * p_11)) {
    v_4 = (double)v_13 / -421.440458809;
    v_13 = (int)((unsigned long)((unsigned int)v % (v_19 + 192U) << (
                                 ~ v_21 & 31UL)) - (- p_11 - 58324UL));
    v = (unsigned char)(~ (! ((long)v_15 * v_4)));
    v_6 = (int)(! p_17);
  }
  while_0_break: ;
  result = (unsigned short)(! (~ (! v)));
  return result;
}


