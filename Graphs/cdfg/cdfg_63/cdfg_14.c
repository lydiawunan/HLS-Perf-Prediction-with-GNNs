#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 748558007
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned short p, short p_9, unsigned long long p_11[3],
              short p_13[5])
{
  float v_7;
  signed char v_5;
  signed char v;
  long long result;
  v_7 = (float)p_13[2];
  v_5 = (signed char)p_13[2];
  result = -26792LL;
  v = (signed char)(- p_11[1] / 18446744073709551489ULL - ~ p_11[2] / (unsigned long long)(
                                                          (int)p_13[1] / (
                                                          (int)p_9 + 830) + 208));
  while ((unsigned long long)v != (unsigned long long)(25484 / ((int)((short)-1010064692.13) + 73)) - 
                                  (unsigned long long)((int)p * (int)p) / 51740ULL) {
    v_5 = v_7 - (float)((long)v_5 * 33011L);
    result = (long long)p;
    v_7 = (float)(((46062 >> ((int)((unsigned short)-3.4019946889e+38) & 15)) << (
                   (int)(374.408217982 / ((double)p + 105.)) & 31)) * (
                  (int)((short)-3645187710.15) - (int)(! p_9)));
    v = (signed char)p;
  }
  while_0_break: ;
  return result;
}


