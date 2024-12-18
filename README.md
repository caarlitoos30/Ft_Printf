<h2>Descripción</h2>
<p>Este proyecto forma parte de 42 Madrid y tiene como objetivo implementar una versión propia de la función <code>printf</code>. La función <code>printf</code> no está permitida en futuros proyectos, por lo que es necesario desarrollar nuestra propia versión para cumplir con los requisitos.</p>
<p>La función <code>ft_printf</code> debe manejar diferentes tipos de argumentos y formatos, simulando el comportamiento de la versión original. Este proyecto no solo mejora nuestras habilidades en C, sino que también nos ayuda a entender cómo funcionan internamente las funciones de la biblioteca estándar.</p>

<h2>Características</h2>
<ul>
    <li>Manejo de conversiones comunes como:
        <ul>
            <li><code>%c</code>: Caracter.</li>
            <li><code>%s</code>: Cadena de texto.</li>
            <li><code>%p</code>: Dirección de memoria.</li>
            <li><code>%d</code> y <code>%i</code>: Enteros con signo.</li>
            <li><code>%u</code>: Enteros sin signo.</li>
            <li><code>%x</code> y <code>%X</code>: Enteros en hexadecimal (minúscula y mayúscula).</li>
            <li><code>%%</code>: Porcentaje literal.</li>
        </ul>
    </li>
    <li>Gestión eficiente de buffers para mejorar el rendimiento.</li>
    <li>Manejo de argumentos variables utilizando la biblioteca <code>stdarg.h</code>.</li>
</ul>

<h2>Requisitos</h2>
<ul>
    <li>Solo se permite el uso de funciones autorizadas por las normas del proyecto de 42.</li>
    <li>Cumplimiento estricto de las normas de estilo de 42.</li>
</ul>
