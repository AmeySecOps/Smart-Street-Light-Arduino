<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Smart Street Light - [SYSTEM ACCESS LOG]</title>
    <!-- Load Tailwind CSS CDN -->
    <script src="https://cdn.tailwindcss.com"></script>
    <style>
        /* Custom font import (Inter is the standard default) */
        @import url('https://fonts.googleapis.com/css2?family=Space+Mono:wght@400;700&family=Inter:wght@100..900&display=swap');
        
        /* Using a mix of Inter (clean) and Space Mono (code feel) */
        body {
            font-family: 'Inter', sans-serif;
            transition: background-color 0.3s;
        }

        /* Set the theme to ultra-dark, almost black */
        .cyber-bg {
            background-color: #030712; /* Darker than gray-900 */
        }

        /* Neon Cyan Accent Color */
        .neon-cyan {
            color: #22d3ee; /* cyan-400 */
        }
        
        /* Neon Glow Effect for Cards/Borders */
        .neon-border {
            border: 1px solid #06b6d4; /* cyan-600 */
            box-shadow: 0 0 15px rgba(34, 211, 238, 0.4), inset 0 0 8px rgba(34, 211, 238, 0.2);
            transition: all 0.3s ease-in-out;
        }

        /* Subtle hover effect */
        .neon-border:hover {
            box-shadow: 0 0 25px rgba(34, 211, 238, 0.7), inset 0 0 12px rgba(34, 211, 238, 0.4);
            transform: translateY(-2px);
        }

        /* Gradient for Titles */
        .text-gradient {
            background-clip: text;
            -webkit-background-clip: text;
            -webkit-text-fill-color: transparent;
            background-image: linear-gradient(90deg, #22d3ee, #c084fc); /* Cyan to Violet */
        }

        /* Monospace font for code/data display */
        .code-font {
            font-family: 'Space Mono', monospace;
        }

        /* Custom scrollbar for aesthetics */
        body::-webkit-scrollbar {
            width: 6px;
        }
        body::-webkit-scrollbar-thumb {
            background-color: #c084fc; /* Violet */
            border-radius: 3px;
        }
    </style>
</head>
<body class="cyber-bg text-gray-100 min-h-screen">

    <!-- Header Section (Data Interface Look) -->
    <header class="py-16 mb-12 border-b border-cyan-700/50 shadow-xl" style="background: rgba(17, 24, 39, 0.4);">
        <div class="container mx-auto px-4 sm:px-6 lg:px-8 text-center">
            <h1 class="text-6xl sm:text-7xl font-extrabold block mb-4 code-font text-gradient">
                // SMART-STREET-LIGHT //
            </h1>
            <p class="text-xl sm:text-2xl text-gray-400 max-w-4xl mx-auto code-font">
                [ACCESS GRANTED] Automated Traffic Luminance System. Status: Online.
            </p>
            <div class="mt-4 text-xs text-gray-600 code-font">
                SYSTEM CORE: ARDUINO UNO R3 | I/O PROTOCOL: LDR & HC-SR04
            </div>
        </div>
    </header>

    <!-- Main Content Grid -->
    <main class="container mx-auto px-4 sm:px-6 lg:px-8 pb-16">

        <!-- Project Overview Card -->
        <section class="mb-12">
            <div class="neon-border bg-gray-900/70 p-6 sm:p-10 rounded-2xl">
                <h2 class="text-4xl font-bold text-gradient mb-4 code-font flex items-center">
                    <span class="mr-3">|</span> Intelligent Light Control Module 🚦
                </h2>
                <p class="text-lg text-gray-300 leading-relaxed">
                    This project deploys a decentralized <span class="neon-cyan font-bold">Energy Conservation Protocol</span> by automating street lighting based on real-time environmental and transit data. Illumination is activated only during <span class="text-violet-400 font-bold">low-light conditions</span> (LDR) and upon detection of a <span class="text-violet-400 font-bold">vehicular presence</span> (Ultrasonic), minimizing power drain compared to legacy systems.
                </p>
            </div>
        </section>

        <!-- Features and Components Grid -->
        <div class="grid lg:grid-cols-2 gap-8 mb-12">

            <!-- Features Section -->
            <section class="neon-border bg-gray-900/70 p-6 rounded-2xl">
                <h3 class="text-3xl font-semibold text-gradient mb-4 code-font flex items-center">
                    🧠 Operational Features
                </h3>
                <ul class="space-y-3 text-lg list-none pl-0 code-font text-gray-300">
                    <li class="flex items-start">
                        <span class="neon-cyan mr-3 mt-1">>></span> Environmental Lock: Active only post-dusk (LDR)
                    </li>
                    <li class="flex items-start">
                        <span class="neon-cyan mr-3 mt-1">>></span> Proximity Sensor: Vehicle detection via **HC-SR04**
                    </li>
                    <li class="flex items-start">
                        <span class="neon-cyan mr-3 mt-1">>></span> State Transition: Light ON when target is within range
                    </li>
                    <li class="flex items-start">
                        <span class="neon-cyan mr-3 mt-1">>></span> Auto-Standby: Light OFF following target exit (Energy optimization)
                    </li>
                    <li class="flex items-start">
                        <span class="neon-cyan mr-3 mt-1">>></span> Scalability: Array-ready for mass deployment
                    </li>
                </ul>
            </section>

            <!-- Components Used Section -->
            <section class="neon-border bg-gray-900/70 p-6 rounded-2xl">
                <h3 class="text-3xl font-semibold text-gradient mb-4 code-font flex items-center">
                    🧰 Hardware Manifest
                </h3>
                <ul class="space-y-2 text-lg list-disc list-inside text-gray-300 code-font">
                    <li>**Arduino UNO** (Microcontroller Core)</li>
                    <li>**LDR Module** (Ambient Light Sensor)</li>
                    <li>**Ultrasonic Sensor (HC-SR04)** (Rangefinder)</li>
                    <li>**LED + 220Ω resistor** (Luminance Output)</li>
                    <li>Breadboard and jumper wires (Interconnects)</li>
                </ul>
            </section>
        </div>

        <!-- Connections and How It Works Section -->
        <div class="grid lg:grid-cols-2 gap-8 mb-12">
            <!-- Circuit Connections Table (System Log Style) -->
            <section class="neon-border bg-gray-900/70 p-6 rounded-2xl">
                <h3 class="text-3xl font-semibold text-gradient mb-4 code-font flex items-center">
                    ⚙️ I/O Pinout Configuration
                </h3>
                <div class="overflow-x-auto">
                    <table class="min-w-full text-left rounded-lg overflow-hidden border-collapse code-font text-sm">
                        <thead class="bg-violet-900/50 text-violet-300 uppercase tracking-wider border-b border-cyan-600">
                            <tr>
                                <th class="py-3 px-4">Component_ID</th>
                                <th class="py-3 px-4">Arduino_Pin</th>
                            </tr>
                        </thead>
                        <tbody class="divide-y divide-cyan-900">
                            <tr class="hover:bg-gray-800/70">
                                <td class="py-3 px-4 font-bold neon-cyan">LDR_OUT</td>
                                <td class="py-3 px-4">A0 (ANALOG IN)</td>
                            </tr>
                            <tr class="hover:bg-gray-800/70">
                                <td class="py-3 px-4 font-bold neon-cyan">TRIG_PULSE</td>
                                <td class="py-3 px-4">D9 (DIGITAL OUT)</td>
                            </tr>
                            <tr class="hover:bg-gray-800/70">
                                <td class="py-3 px-4 font-bold neon-cyan">ECHO_REC</td>
                                <td class="py-3 px-4">D10 (DIGITAL IN)</td>
                            </tr>
                            <tr class="hover:bg-gray-800/70">
                                <td class="py-3 px-4 font-bold neon-cyan">LED_OUTPUT</td>
                                <td class="py-3 px-4">D8 (DIGITAL OUT)</td>
                            </tr>
                            <tr class="hover:bg-gray-800/70 text-gray-500">
                                <td class="py-3 px-4">POWER_BUS</td>
                                <td class="py-3 px-4">5V</td>
                            </tr>
                            <tr class="hover:bg-gray-800/70 text-gray-500">
                                <td class="py-3 px-4">GROUND_REF</td>
                                <td class="py-3 px-4">GND</td>
                            </tr>
                        </tbody>
                    </table>
                </div>
            </section>

            <!-- How It Works Section (Flowchart/Logic Gate Look) -->
            <section class="neon-border bg-gray-900/70 p-6 rounded-2xl">
                <h3 class="text-3xl font-semibold text-gradient mb-4 code-font flex items-center">
                    🧩 Execution Logic Flow
                </h3>
                <div class="space-y-4 text-lg text-gray-300 code-font">
                    <p class="p-3 bg-cyan-900/30 rounded border border-cyan-700/50">
                        <span class="text-violet-400 font-bold">IF (LDR_READ &lt; NIGHT_THRESHOLD)</span>: Initiate Proximity Check
                    </p>
                    <p class="p-3 bg-violet-900/30 rounded border border-violet-700/50">
                        <span class="text-cyan-400 font-bold">ELSE</span>: Maintain System Standby (Light OFF)
                    </p>
                    <p class="p-3 bg-cyan-900/30 rounded border border-cyan-700/50">
                        <span class="text-violet-400 font-bold">IF (ULTRASONIC_DISTANCE &lt;= 30 CM)</span>: Activate Luminance Output (LED ON)
                    </p>
                    <p class="p-3 bg-violet-900/30 rounded border border-violet-700/50">
                        <span class="text-cyan-400 font-bold">ELSE</span>: Deactivate Luminance Output (LED OFF after delay)
                    </p>
                </div>
            </section>
        </div>

        <!-- Diagram and Code Section -->
        <section class="mb-12 neon-border bg-gray-900/70 p-6 rounded-2xl">
            <h3 class="text-3xl font-semibold text-gradient mb-4 code-font flex items-center">
                💻 System Code & Schematics
            </h3>
            <div class="grid md:grid-cols-2 gap-6">
                <div>
                    <p class="text-lg text-gray-300 mb-3">
                        Primary system code and diagnostic scripts:
                    </p>
                    <ul class="space-y-2 text-lg code-font">
                        <li>
                            <code class="bg-gray-800 text-cyan-400 p-1 rounded-sm border border-cyan-800">Smart_Street_Light.ino</code> (Core Execution Logic)
                        </li>
                        <li>
                            <code class="bg-gray-800 text-cyan-400 p-1 rounded-sm border border-cyan-800">Ultrasonic_Test.ino</code> (Sensor Calibration Utility)
                        </li>
                    </ul>
                </div>
                <div>
                    <h4 class="text-xl font-medium text-gray-200 mb-3 code-font">
                        🖼️ Circuit Topology Diagram
                    </h4>
                    <div class="bg-gray-800/50 p-6 rounded-lg text-center text-gray-500 italic border border-violet-500/50 code-font">
                        [VISUAL ASSET PENDING] - circuit\_diagram.png will be inserted here.
                    </div>
                </div>
            </div>
        </section>


        <!-- Author Section (Security Log Look) -->
        <section class="neon-border bg-violet-900/30 p-6 rounded-2xl border-violet-500">
            <h3 class="text-2xl font-semibold text-white mb-3 code-font flex items-center">
                <span class="text-violet-400 mr-2">[USER_PROFILE_ACCESS]</span>
            </h3>
            <div class="text-lg text-gray-300 code-font">
                <p class="text-violet-400"><span class="font-bold">ENTITY_ID:</span> Amey Jadhav</p>
                <p><span class="font-bold text-cyan-400">CREDENTIALS:</span> B.Tech CSE | DBATU University</p>
                <p><span class="font-bold text-cyan-400">CLASSIFICATION:</span> IoT & Embedded Systems Architect</p>
            </div>
        </section>

    </main>
</body>
</html>
