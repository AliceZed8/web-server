<h1>Web-Server</h1>
**Цель:** разработка https-сервера и динамического веб-сайта с использованием языка C++.

**Языки и инструменты:**
<div>
<img src="https://github.com/devicons/devicon/blob/master/icons/cplusplus/cplusplus-original.svg" title="C++" alt="C++" width="20" height="20"/>&nbsp;
<img src="https://github.com/devicons/devicon/blob/master/icons/javascript/javascript-original.svg" title="JavaScript" alt="JavaScript" width="20" height="20"/>&nbsp;
<img src="https://github.com/devicons/devicon/blob/master/icons/html5/html5-original.svg" title="HTML" alt="HTML" width="20" height="20"/>&nbsp;
<img src="https://github.com/devicons/devicon/blob/master/icons/css3/css3-plain-wordmark.svg"  title="CSS" alt="CSS" width="20" height="20"/>&nbsp;
</div>

<b>Cхемка</b>

<code>mermaid
flowchart TD
    WebSite([Клиент])
    CSS_JS([CSS и JS]) --> HTMLBuilder
    SQL_Class([SQL]) --> HTMLBuilder
    SQL_Class <--> CGI
    WebServer <--> CGI([CGI scripts]) <--> HTMLBuilder([HTMLBuilder])
    
    API([API]) --> WebServer
    WebSite <--> API
    WebSite <--> WebServer([Веб-сервер]) 
</code>

<h2>Установка</h2>
<p>
    <h3>Windows</h3>
    <p>
        <h4>MinGW Compiler</h4>
        <b>DevKit</b>
        <b>[gcc-w64devkit-mingw](https://github.com/skeeto/w64devkit/releases)</b>
        <b>Compile:</b>
        <code>g++ -std=c++20 main.cpp -o main.exe -lWs2_32</code>
    </p>
</p>

