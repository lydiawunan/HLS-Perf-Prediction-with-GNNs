#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 104854739
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p, short p_9, char p_11, unsigned short p_13,
                unsigned short p_15)
{
  char v_25;
  int v_23;
  unsigned int v_21;
  int v_19;
  unsigned long v_17;
  short v_7;
  unsigned long v_5;
  signed char v;
  signed char result;
  v_25 = p_11;
  v_23 = (int)p_15;
  v_21 = 8839U;
  v_17 = (unsigned long)p_13;
  v_7 = (short)3843;
  v = (signed char)-76;
  result = (signed char)p;
  if ((unsigned int)(- (~ (! p))) <= (4294918280U ^ ((unsigned int)p_13 + v_21)) / (
                                     ~ (v_21 % ((unsigned int)2.79967135517e+38 + 655U)) + 500U)) {
    v_19 = ! ((int)p_13 / (~ v_23 + 245));
    v = (signed char)p_11;
    v_17 = 3385088093UL;
  }
  else {
    v_21 = (unsigned int)(~ ((long long)p_15 / 65376LL) | (long long)(! (~ p_13)));
    v_7 = (short)v_25;
    v_19 = ! (((int)p_13 / ((int)p_11 + 286)) % ((int)result * (int)v_7 + 130));
  }
  if ((long long)(v_17 * (unsigned long)(v_19 / ((int)v_7 + 595)) - (unsigned long)v_21) >= 
      - ((long long)p_9 / -372295759LL) * (long long)v) {
    v = (signed char)(((int)p_11 % 238) * (int)p_13);
    v_5 = (unsigned long)((int)v_7 / (((int)p - (47117 ^ (int)p_9)) + 251));
    result = (signed char)(! ((unsigned long)((int)v + (int)p) / (v_5 / 49457UL + 641UL)));
  }
  else result = (signed char)(- (- (13146UL * (unsigned long)p_15)));
  return result;
}


