//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 713806657
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(void)
{
  signed char v_8;
  unsigned char v_6;
  unsigned long v_4;
  unsigned char v;
  unsigned long result;
  v_8 = (signed char)75;
  v_4 = 16750UL;
  v_6 = (unsigned char)v_8;
  v = v_6;
  result = v_4;
  result = (unsigned long)(-19939LL % (((long long)((int)v | 1296) / (
                                        (558060225LL - (long long)result) + 22LL)) % (long long)(
                                       498947099UL / (- result + 917UL) + 900UL) + 75LL));
  return result;
}


