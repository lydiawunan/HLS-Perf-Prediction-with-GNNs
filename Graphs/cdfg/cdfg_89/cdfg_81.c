#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1007371669
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p, int p_5, unsigned long long p_7,
                   float p_13, unsigned long long p_15)
{
  char v_21;
  unsigned short v_19;
  unsigned long v_17;
  short v_11;
  short v_9;
  signed char v;
  unsigned short result;
  v_21 = (char)-18;
  v_19 = (unsigned short)10208;
  v_11 = (short)p_13;
  v_9 = (short)31000;
  v = (signed char)p_7;
  result = (unsigned short)43500;
  if ((int)v_21 / (p_5 * ((int)((short)p_13) / ((int)v_11 + 467)) + 148) != (int)v) {
    result = (unsigned short)(! (~ (~ v_11)));
    v = (signed char)(- ((int)v_9 - 518) * -126);
    v_11 = v_9;
  }
  else {
    v_19 = (unsigned short)((((int)v_19 / ((int)v_21 + 1011)) * -6196) / (
                            (int)(! v) + 823));
    v_11 = (short)(-7038083988.85 / ((double)((int)(- v_11) - ((int)v_9 - -61)) + 175.));
    v_9 = (short)v_19;
  }
  while ((unsigned long long)((unsigned int)result % (! ((unsigned int)v | p) + 346U)) != 
         (unsigned long long)((long)((int)v ^ p_5) + -690063983L) * ~ p_7) {
    v_17 = (int)v_11 % (((int)v_9 ^ -604) + 542);
    v_11 = (short)(2592416466UL / (! (v_17 + 56385UL) + 660UL));
    result = (unsigned short)49735;
    v = (signed char)(- (- (p_13 - (float)p_15)));
  }
  while_0_break: ;
  return result;
}


