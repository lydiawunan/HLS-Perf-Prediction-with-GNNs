#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 897316231
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p, signed char p_4, signed char p_7, short p_9,
              double p_11)
{
  float v_23;
  unsigned long long v_21;
  unsigned long v_19;
  unsigned long long v_17;
  char v_15;
  unsigned char v_13;
  signed char v;
  long long result;
  v_23 = (float)p_9;
  v_21 = 27422ULL;
  v_17 = 30469ULL;
  result = 9329LL;
  if ((unsigned long long)p_7 < (- v_21 / (unsigned long long)(((int)((short)v_23) + (int)p_9) + 155)) * (unsigned long long)(~ (- result))) {
    v_15 = (char)15;
    v_13 = (unsigned char)v_15;
    v_13 = (unsigned char)((int)p_9 * (int)v_13);
  }
  else {
    v_19 = (unsigned long)(~ (((int)p + (int)p_9) - (int)(- p_11)));
    v_15 = (char)((v_17 / (unsigned long long)((int)(! p_4) + 680)) / (unsigned long long)(
                  109UL % (((unsigned long)p_9 + v_19) + 363UL) + 800UL));
    v_13 = (unsigned char)v_15;
  }
  if (p_11 >= (double)((int)(-4164336640. + p_11) - ((int)v_13 | -109))) 
    result = ~ ((long long)(- p) + 249215457LL);
  else {
    v = (signed char)(~ (- (~ p_9)));
    result = ((long long)p_4 / -64506LL + (long long)((int)v + (int)p_7)) % -23LL;
  }
  return result;
}


