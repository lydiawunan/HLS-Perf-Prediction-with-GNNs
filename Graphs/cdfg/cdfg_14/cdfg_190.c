#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 656909831
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p, unsigned int p_5[2][4][1], signed char p_9, long long p_11,
         signed char p_13)
{
  unsigned long v_27;
  unsigned long long v_25;
  float v_23;
  float v_21;
  char v_19;
  signed char v_17;
  float v_15;
  float v_7;
  unsigned short v;
  char result;
  v_27 = (unsigned long)p_13;
  v_25 = (unsigned long long)p_9;
  v_23 = -1.18309820378e+38f;
  v_21 = 637.89074707f;
  v_19 = (char)79;
  v_17 = (signed char)-16;
  v_15 = -1753516288.f;
  v = (unsigned short)p;
  result = (char)108;
  while ((unsigned long long)(- (v_21 / (v_23 + 316.f)) - 0.f) != - (
         v_25 % (unsigned long long)(~ p_5[0][2][0] + 412U))) {
    v_15 = v_27 / 4294967169UL;
    v_19 = (char)((int)((char)(v_15 * (float)(p_11 + -507LL))) * (int)result);
    v_7 = (float)(! ((unsigned int)(~ v) * 4294944705U));
    v_25 = (unsigned long long)(~ ((long long)v_7 + (long long)result % (
                                                    p_11 + 211LL)));
  }
  while_0_break: ;
  if ((230 & (int)((unsigned char)v_15)) > ! ((int)(- v_17) * ((int)v_19 / (
                                                               (int)p_9 + 501)))) {
    v = (unsigned short)51168;
    v = (unsigned short)(! ((unsigned int)(p * (int)v) - p_5[0][3][0]));
    result = (char)v;
  }
  else {
    v_7 = (float)(! (- (~ p_13)));
    result = (char)(~ ((long long)((int)((signed char)v_7) % ((int)p_9 + 805)) - 
                       127487963LL * p_11));
  }
  return result;
}


