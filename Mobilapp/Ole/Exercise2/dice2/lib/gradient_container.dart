import 'package:dice2/dice_roller.dart';
import 'package:dice2/style_text.dart';
import 'package:flutter/material.dart';
import 'dice_roller.dart';

const startAligment = Alignment.topLeft;
const endAligment = Alignment.bottomRight;

class GradientContainer extends StatelessWidget {
  const GradientContainer(this.color1, this.color2, this.color3, this.color4, {super.key});

  final Color color1;
  final Color color2;
  final Color color3;
  final Color color4;

  @override
  Widget build(context) {
    return Container(
      decoration: BoxDecoration(
        gradient: LinearGradient(
          colors: [color1, color2, color3, color4],
          begin: startAligment,
          end: endAligment,
          stops: const [
            0.1,
            0.4,
            0.6,
            0.9,
          ],
        ),
      ),
      child: const Center(
        child: DiceRoller(),
      ),
    );
  }
}
