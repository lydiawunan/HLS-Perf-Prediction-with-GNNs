#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 261217456
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, long p_5, unsigned long p_7[1], int p_9,
                signed char p_15)
{
  float v_21;
  unsigned short v_19;
  unsigned char v_17;
  unsigned int v_13;
  int v_11;
  unsigned long long v;
  signed char result;
  v_21 = -323.699371338f;
  v_19 = (unsigned short)p_7[0];
  v_17 = (unsigned char)9;
  v_13 = (unsigned int)p_15;
  v_11 = ! (((int)-6506430976.f | p_9) - (int)((float)v_13 + v_21));
  if ((unsigned long long)((long)v_19 % ((~ p_5 >> 27ULL) + 174L)) < 
      ((unsigned long long)p_5 % 18446744072686722802ULL + (unsigned long long)(
       15549UL / (unsigned long)(p_5 + 795L))) % (unsigned long long)(
      (49UL / (p_7[0] + 261UL)) % 4294967244UL + 616UL)) {
    v = ~ ((unsigned long long)p_5 * 18446744072765292296ULL) % (unsigned long long)(
        p + 658U);
    result = (signed char)(v / (unsigned long long)(p + 132U));
  }
  else {
    v_13 = (unsigned int)(-79 % ((int)(- (! v_17)) + 630));
    result = (signed char)((unsigned int)p_15 - ~ (! p));
    result = (signed char)(p_7[0] + (unsigned long)((unsigned int)((int)result % (
                                                                   p_9 + 496)) + (
                                                    (unsigned int)v_11 & v_13)));
  }
  return result;
}


