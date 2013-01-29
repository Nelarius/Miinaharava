  


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>SFML/cmake/Modules/FindSFML.cmake at master · LaurentGomila/SFML</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon-precomposed" sizes="57x57" href="apple-touch-icon-114.png" />
    <link rel="apple-touch-icon-precomposed" sizes="114x114" href="apple-touch-icon-114.png" />
    <link rel="apple-touch-icon-precomposed" sizes="72x72" href="apple-touch-icon-144.png" />
    <link rel="apple-touch-icon-precomposed" sizes="144x144" href="apple-touch-icon-144.png" />
    <link rel="logo" type="image/svg" href="http://github-media-downloads.s3.amazonaws.com/github-logo.svg" />
    <meta name="msapplication-TileImage" content="/windows-tile.png">
    <meta name="msapplication-TileColor" content="#ffffff">

    
    
    <link rel="icon" type="image/x-icon" href="/favicon.ico" />

    <meta content="authenticity_token" name="csrf-param" />
<meta content="Cxdej93yP34l6YOcvQ1eCdDbGgyr0oGooeTUwo6OZkA=" name="csrf-token" />

    <link href="https://a248.e.akamai.net/assets.github.com/assets/github-73491f9ebc4de77508c670e52e0d5f58aeac9bb5.css" media="screen" rel="stylesheet" type="text/css" />
    <link href="https://a248.e.akamai.net/assets.github.com/assets/github2-2dc0e44765319ecca06faa104bd1dfd6897fa508.css" media="screen" rel="stylesheet" type="text/css" />
    


        <script src="https://a248.e.akamai.net/assets.github.com/assets/frameworks-995182d02a0effa06cdc51e33fe6e729014a3c91.js" type="text/javascript"></script>
      <script src="https://a248.e.akamai.net/assets.github.com/assets/github-a885c6be78efc4446d1129edc514d5687f1ca02e.js" type="text/javascript"></script>
      

        <link rel='permalink' href='/LaurentGomila/SFML/blob/e75045358e88c8655379bc20d39d9fa26b87144a/cmake/Modules/FindSFML.cmake'>
    <meta property="og:title" content="SFML"/>
    <meta property="og:type" content="githubog:gitrepository"/>
    <meta property="og:url" content="https://github.com/LaurentGomila/SFML"/>
    <meta property="og:image" content="https://secure.gravatar.com/avatar/c680fa10c5e970b379c989557eb5f1a6?s=420&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png"/>
    <meta property="og:site_name" content="GitHub"/>
    <meta property="og:description" content="Simple and Fast Multimedia Library. Contribute to SFML development by creating an account on GitHub."/>
    <meta property="twitter:card" content="summary"/>
    <meta property="twitter:site" content="@GitHub">
    <meta property="twitter:title" content="LaurentGomila/SFML"/>

    <meta name="description" content="Simple and Fast Multimedia Library. Contribute to SFML development by creating an account on GitHub." />

  <link href="https://github.com/LaurentGomila/SFML/commits/master.atom" rel="alternate" title="Recent Commits to SFML:master" type="application/atom+xml" />

  </head>


  <body class="logged_in page-blob windows vis-public env-production ">
    <div id="wrapper">

      

      

      


        <div class="header header-logged-in true">
          <div class="container clearfix">

            <a class="header-logo-blacktocat" href="https://github.com/">
  <span class="mega-icon mega-icon-blacktocat"></span>
</a>

            <div class="divider-vertical"></div>

              <a href="/notifications" class="notification-indicator tooltipped downwards" title="You have no unread notifications">
    <span class="mail-status all-read"></span>
  </a>
  <div class="divider-vertical"></div>


              <div class="topsearch command-bar-activated ">
  <form accept-charset="UTF-8" action="/search" class="command_bar_form" id="top_search_form" method="get">
  <a href="/search/advanced" class="advanced-search-icon tooltipped downwards command-bar-search" id="advanced_search" title="Advanced search"><span class="mini-icon mini-icon-advanced-search "></span></a>

  <input type="text" name="q" id="command-bar" placeholder="Search or type a command" tabindex="1" data-username="Nelarius" autocapitalize="off">

  <span class="mini-icon help tooltipped downwards" title="Show command bar help">
    <span class="mini-icon mini-icon-help"></span>
  </span>

  <input type="hidden" name="ref" value="commandbar">

  <div class="divider-vertical"></div>
</form>
  <ul class="top-nav">
      <li class="explore"><a href="https://github.com/explore">Explore</a></li>
      <li><a href="https://gist.github.com">Gist</a></li>
      <li><a href="/blog">Blog</a></li>
    <li><a href="http://help.github.com">Help</a></li>
  </ul>
</div>


            

  
    <ul id="user-links">
      <li>
        <a href="https://github.com/Nelarius" class="name">
          <img height="20" src="https://secure.gravatar.com/avatar/6716cfccbd7186782bc675a31ce283a8?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="20" /> Nelarius
        </a>
      </li>
      <li>
        <a href="/new" id="new_repo" class="tooltipped downwards" title="Create a new repo">
          <span class="mini-icon mini-icon-create"></span>
        </a>
      </li>
      <li>
        <a href="/settings/profile" id="account_settings"
          class="tooltipped downwards"
          title="Account settings ">
          <span class="mini-icon mini-icon-account-settings"></span>
        </a>
      </li>
      <li>
          <a href="/logout" data-method="post" id="logout" class="tooltipped downwards" title="Sign out">
            <span class="mini-icon mini-icon-logout"></span>
          </a>
      </li>
    </ul>



            
          </div>
        </div>


      

      


            <div class="site hfeed" itemscope itemtype="http://schema.org/WebPage">
      <div class="hentry">
        
        <div class="pagehead repohead instapaper_ignore readability-menu">
          <div class="container">
            <div class="title-actions-bar">
              


                  <ul class="pagehead-actions">

          <li class="subscription">
            <form accept-charset="UTF-8" action="/notifications/subscribe" data-autosubmit="true" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="Cxdej93yP34l6YOcvQ1eCdDbGgyr0oGooeTUwo6OZkA=" /></div>  <input id="repository_id" name="repository_id" type="hidden" value="1524684" />

    <div class="select-menu js-menu-container js-select-menu">
      <span class="minibutton select-menu-button js-menu-target">
        <span class="js-select-button">
          <span class="mini-icon mini-icon-watching"></span>
          Watch
        </span>
      </span>

      <div class="select-menu-modal-holder js-menu-content">
        <div class="select-menu-modal">
          <div class="select-menu-header">
            <span class="select-menu-title">Notification status</span>
            <span class="mini-icon mini-icon-remove-close js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-list js-navigation-container js-select-menu-pane">

            <div class="select-menu-item js-navigation-item js-navigation-target selected">
              <span class="select-menu-checkmark mini-icon mini-icon-confirm"></span>
              <div class="select-menu-item-text">
                <input checked="checked" id="do_included" name="do" type="radio" value="included" />
                <h4>Not watching</h4>
                <span class="description">You only receive notifications for discussions in which you participate or are @mentioned.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="mini-icon mini-icon-watching"></span>
                  Watch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item js-navigation-target ">
              <span class="select-menu-checkmark mini-icon mini-icon-confirm"></span>
              <div class="select-menu-item-text">
                <input id="do_subscribed" name="do" type="radio" value="subscribed" />
                <h4>Watching</h4>
                <span class="description">You receive notifications for all discussions in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="mini-icon mini-icon-unwatch"></span>
                  Unwatch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item js-navigation-target ">
              <span class="select-menu-checkmark mini-icon mini-icon-confirm"></span>
              <div class="select-menu-item-text">
                <input id="do_ignore" name="do" type="radio" value="ignore" />
                <h4>Ignoring</h4>
                <span class="description">You do not receive any notifications for discussions in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="mini-icon mini-icon-mute"></span>
                  Stop ignoring
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

</form>
          </li>

          <li class="js-toggler-container js-social-container starring-container ">
            <a href="/LaurentGomila/SFML/unstar" class="minibutton js-toggler-target starred" data-remote="true" data-method="post" rel="nofollow">
              <span class="mini-icon mini-icon-star"></span>Unstar
            </a><a href="/LaurentGomila/SFML/star" class="minibutton js-toggler-target unstarred" data-remote="true" data-method="post" rel="nofollow">
              <span class="mini-icon mini-icon-star"></span>Star
            </a><a class="social-count js-social-count" href="/LaurentGomila/SFML/stargazers">787</a>
          </li>

              <li><a href="/LaurentGomila/SFML/fork" class="minibutton js-toggler-target fork-button lighter" rel="nofollow" data-method="post"><span class="mini-icon mini-icon-fork"></span>Fork</a><a href="/LaurentGomila/SFML/network" class="social-count">120</a>
              </li>


    </ul>

              <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
                <span class="repo-label"><span>public</span></span>
                <span class="mega-icon mega-icon-public-repo"></span>
                <span class="author vcard">
                  <a href="/LaurentGomila" class="url fn" itemprop="url" rel="author">
                  <span itemprop="title">LaurentGomila</span>
                  </a></span> /
                <strong><a href="/LaurentGomila/SFML" class="js-current-repository">SFML</a></strong>
              </h1>
            </div>

            

  <ul class="tabs">
    <li><a href="/LaurentGomila/SFML" class="selected" highlight="repo_sourcerepo_downloadsrepo_commitsrepo_tagsrepo_branches">Code</a></li>
    <li><a href="/LaurentGomila/SFML/network" highlight="repo_network">Network</a></li>
    <li><a href="/LaurentGomila/SFML/pulls" highlight="repo_pulls">Pull Requests <span class='counter'>14</span></a></li>

      <li><a href="/LaurentGomila/SFML/issues" highlight="repo_issues">Issues <span class='counter'>95</span></a></li>

      <li><a href="/LaurentGomila/SFML/wiki" highlight="repo_wiki">Wiki</a></li>


    <li><a href="/LaurentGomila/SFML/graphs" highlight="repo_graphsrepo_contributors">Graphs</a></li>


  </ul>
  
<div class="tabnav">

  <span class="tabnav-right">
    <ul class="tabnav-tabs">
          <li><a href="/LaurentGomila/SFML/tags" class="tabnav-tab" highlight="repo_tags">Tags <span class="counter ">2</span></a></li>
    </ul>
    
  </span>

  <div class="tabnav-widget scope">


    <div class="select-menu js-menu-container js-select-menu js-branch-menu">
      <a class="minibutton select-menu-button js-menu-target" data-hotkey="w" data-ref="master">
        <span class="mini-icon mini-icon-branch"></span>
        <i>branch:</i>
        <span class="js-select-button">master</span>
      </a>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container js-select-menu-pane">

        <div class="select-menu-modal js-select-menu-pane">
          <div class="select-menu-header">
            <span class="select-menu-title">Switch branches/tags</span>
            <span class="mini-icon mini-icon-remove-close js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-filters">
            <div class="select-menu-text-filter">
              <input type="text" id="commitish-filter-field" class="js-select-menu-text-filter js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
            </div> <!-- /.select-menu-text-filter -->
            <div class="select-menu-tabs">
              <ul>
                <li class="select-menu-tab">
                  <a href="#" data-filter="branches" class="js-select-menu-tab selected">Branches</a>
                </li>
                <li class="select-menu-tab">
                  <a href="#" data-filter="tags" class="js-select-menu-tab">Tags</a>
                </li>
              </ul>
            </div><!-- /.select-menu-tabs -->
          </div><!-- /.select-menu-filters -->

          <div class="select-menu-list js-filter-tab js-filter-branches css-truncate" data-filterable-for="commitish-filter-field" data-filterable-type="substring">



              <div class="select-menu-item js-navigation-item js-navigation-target ">
                <span class="select-menu-checkmark mini-icon mini-icon-confirm"></span>
                <a href="/LaurentGomila/SFML/blob/drawables/cmake/Modules/FindSFML.cmake" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="drawables" rel="nofollow" title="drawables">drawables</a>
              </div> <!-- /.select-menu-item -->

              <div class="select-menu-item js-navigation-item js-navigation-target selected">
                <span class="select-menu-checkmark mini-icon mini-icon-confirm"></span>
                <a href="/LaurentGomila/SFML/blob/master/cmake/Modules/FindSFML.cmake" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="master" rel="nofollow" title="master">master</a>
              </div> <!-- /.select-menu-item -->

              <div class="select-menu-item js-navigation-item js-navigation-target ">
                <span class="select-menu-checkmark mini-icon mini-icon-confirm"></span>
                <a href="/LaurentGomila/SFML/blob/sfml1/cmake/Modules/FindSFML.cmake" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="sfml1" rel="nofollow" title="sfml1">sfml1</a>
              </div> <!-- /.select-menu-item -->

              <div class="select-menu-no-results js-not-filterable">Nothing to show</div>
          </div> <!-- /.select-menu-list -->


          <div class="select-menu-list js-filter-tab js-filter-tags css-truncate" data-filterable-for="commitish-filter-field" data-filterable-type="substring" style="display:none;">

              <div class="select-menu-item js-navigation-item js-navigation-target ">
                <span class="select-menu-checkmark mini-icon mini-icon-confirm"></span>
                    <a href="/LaurentGomila/SFML/blob/bindings_removed/cmake/Modules/FindSFML.cmake" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="bindings_removed" rel="nofollow" title="bindings_removed">bindings_removed</a>

              </div> <!-- /.select-menu-item -->
              <div class="select-menu-item js-navigation-item js-navigation-target ">
                <span class="select-menu-checkmark mini-icon mini-icon-confirm"></span>
                    <a href="/LaurentGomila/SFML/blob/2.0-rc/cmake/Modules/FindSFML.cmake" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="2.0-rc" rel="nofollow" title="2.0-rc">2.0-rc</a>

              </div> <!-- /.select-menu-item -->

            <div class="select-menu-no-results js-not-filterable">Nothing to show</div>

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

  </div> <!-- /.scope -->

  <ul class="tabnav-tabs">
    <li><a href="/LaurentGomila/SFML" class="selected tabnav-tab" highlight="repo_source">Files</a></li>
    <li><a href="/LaurentGomila/SFML/commits/master" class="tabnav-tab" highlight="repo_commits">Commits</a></li>
    <li><a href="/LaurentGomila/SFML/branches" class="tabnav-tab" highlight="repo_branches" rel="nofollow">Branches <span class="counter ">3</span></a></li>
  </ul>

</div>

  
  
  


            
          </div>
        </div><!-- /.repohead -->

        <div id="js-repo-pjax-container" class="container context-loader-container" data-pjax-container>
          


<!-- blob contrib key: blob_contributors:v21:9f67b920d98fc345d7335f342a1f53b4 -->
<!-- blob contrib frag key: views10/v8/blob_contributors:v21:9f67b920d98fc345d7335f342a1f53b4 -->

<div id="slider">
    <div class="frame-meta">

      <p title="This is a placeholder element" class="js-history-link-replace hidden"></p>
      <div class="breadcrumb">
        <span class='bold'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/LaurentGomila/SFML" class="js-slide-to" data-direction="back" itemscope="url"><span itemprop="title">SFML</span></a></span></span> / <span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/LaurentGomila/SFML/tree/master/cmake" class="js-slide-to" data-direction="back" itemscope="url"><span itemprop="title">cmake</span></a></span> / <span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/LaurentGomila/SFML/tree/master/cmake/Modules" class="js-slide-to" data-direction="back" itemscope="url"><span itemprop="title">Modules</span></a></span> / <strong class="final-path">FindSFML.cmake</strong> <span class="js-zeroclipboard zeroclipboard-button" data-clipboard-text="cmake/Modules/FindSFML.cmake" data-copied-hint="copied!" title="copy to clipboard"><span class="mini-icon mini-icon-clipboard"></span></span>
      </div>

      <a href="/LaurentGomila/SFML/find/master" class="js-slide-to" data-hotkey="t" style="display:none">Show File Finder</a>

        
  <div class="commit file-history-tease">
    <img class="main-avatar" height="24" src="https://secure.gravatar.com/avatar/c680fa10c5e970b379c989557eb5f1a6?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
    <span class="author"><a href="/LaurentGomila" rel="author">LaurentGomila</a></span>
    <time class="js-relative-date" datetime="2012-12-23T00:25:16-08:00" title="2012-12-23 00:25:16">December 23, 2012</time>
    <div class="commit-title">
        <a href="/LaurentGomila/SFML/commit/dd48427bb803ce0b97f721136b0100b067bd8749" class="message">Improved the success message in FindSFML.cmake</a>
    </div>

    <div class="participation">
      <p class="quickstat"><a href="#blob_contributors_box" rel="facebox"><strong>2</strong> contributors</a></p>
          <a class="avatar tooltipped downwards" title="LaurentGomila" href="/LaurentGomila/SFML/commits/master/cmake/Modules/FindSFML.cmake?author=LaurentGomila"><img height="20" src="https://secure.gravatar.com/avatar/c680fa10c5e970b379c989557eb5f1a6?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="20" /></a>
    <a class="avatar tooltipped downwards" title="mantognini" href="/LaurentGomila/SFML/commits/master/cmake/Modules/FindSFML.cmake?author=mantognini"><img height="20" src="https://secure.gravatar.com/avatar/417a6f6d3cffb86f937638e050d89006?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="20" /></a>


    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2>Users on GitHub who have contributed to this file</h2>
      <ul class="facebox-user-list">
        <li>
          <img height="24" src="https://secure.gravatar.com/avatar/c680fa10c5e970b379c989557eb5f1a6?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
          <a href="/LaurentGomila">LaurentGomila</a>
        </li>
        <li>
          <img height="24" src="https://secure.gravatar.com/avatar/417a6f6d3cffb86f937638e050d89006?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
          <a href="/mantognini">mantognini</a>
        </li>
      </ul>
    </div>
  </div>


    </div><!-- ./.frame-meta -->

    <div class="frames">
      <div class="frame" data-permalink-url="/LaurentGomila/SFML/blob/e75045358e88c8655379bc20d39d9fa26b87144a/cmake/Modules/FindSFML.cmake" data-title="SFML/cmake/Modules/FindSFML.cmake at master · LaurentGomila/SFML · GitHub" data-type="blob">

        <div id="files" class="bubble">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><b class="mini-icon mini-icon-text-file"></b></span>
                <span class="mode" title="File Mode">file</span>
                  <span>210 lines (192 sloc)</span>
                <span>9.654 kb</span>
              </div>
              <ul class="button-group actions">
                  <li>
                        <a class="grouped-button minibutton bigger lighter tooltipped leftwards"
                           title="Clicking this button will automatically fork this project so you can edit the file"
                           href="/LaurentGomila/SFML/edit/master/cmake/Modules/FindSFML.cmake"
                           data-method="post" rel="nofollow">Edit</a>
                  </li>
                <li><a href="/LaurentGomila/SFML/raw/master/cmake/Modules/FindSFML.cmake" class="button minibutton grouped-button bigger lighter" id="raw-url">Raw</a></li>
                  <li><a href="/LaurentGomila/SFML/blame/master/cmake/Modules/FindSFML.cmake" class="button minibutton grouped-button bigger lighter">Blame</a></li>
                <li><a href="/LaurentGomila/SFML/commits/master/cmake/Modules/FindSFML.cmake" class="button minibutton grouped-button bigger lighter" rel="nofollow">History</a></li>
              </ul>

            </div>
                <div class="data type-cmake">
      <table cellpadding="0" cellspacing="0" class="lines">
        <tr>
          <td>
            <pre class="line_numbers"><span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
<span id="L140" rel="#L140">140</span>
<span id="L141" rel="#L141">141</span>
<span id="L142" rel="#L142">142</span>
<span id="L143" rel="#L143">143</span>
<span id="L144" rel="#L144">144</span>
<span id="L145" rel="#L145">145</span>
<span id="L146" rel="#L146">146</span>
<span id="L147" rel="#L147">147</span>
<span id="L148" rel="#L148">148</span>
<span id="L149" rel="#L149">149</span>
<span id="L150" rel="#L150">150</span>
<span id="L151" rel="#L151">151</span>
<span id="L152" rel="#L152">152</span>
<span id="L153" rel="#L153">153</span>
<span id="L154" rel="#L154">154</span>
<span id="L155" rel="#L155">155</span>
<span id="L156" rel="#L156">156</span>
<span id="L157" rel="#L157">157</span>
<span id="L158" rel="#L158">158</span>
<span id="L159" rel="#L159">159</span>
<span id="L160" rel="#L160">160</span>
<span id="L161" rel="#L161">161</span>
<span id="L162" rel="#L162">162</span>
<span id="L163" rel="#L163">163</span>
<span id="L164" rel="#L164">164</span>
<span id="L165" rel="#L165">165</span>
<span id="L166" rel="#L166">166</span>
<span id="L167" rel="#L167">167</span>
<span id="L168" rel="#L168">168</span>
<span id="L169" rel="#L169">169</span>
<span id="L170" rel="#L170">170</span>
<span id="L171" rel="#L171">171</span>
<span id="L172" rel="#L172">172</span>
<span id="L173" rel="#L173">173</span>
<span id="L174" rel="#L174">174</span>
<span id="L175" rel="#L175">175</span>
<span id="L176" rel="#L176">176</span>
<span id="L177" rel="#L177">177</span>
<span id="L178" rel="#L178">178</span>
<span id="L179" rel="#L179">179</span>
<span id="L180" rel="#L180">180</span>
<span id="L181" rel="#L181">181</span>
<span id="L182" rel="#L182">182</span>
<span id="L183" rel="#L183">183</span>
<span id="L184" rel="#L184">184</span>
<span id="L185" rel="#L185">185</span>
<span id="L186" rel="#L186">186</span>
<span id="L187" rel="#L187">187</span>
<span id="L188" rel="#L188">188</span>
<span id="L189" rel="#L189">189</span>
<span id="L190" rel="#L190">190</span>
<span id="L191" rel="#L191">191</span>
<span id="L192" rel="#L192">192</span>
<span id="L193" rel="#L193">193</span>
<span id="L194" rel="#L194">194</span>
<span id="L195" rel="#L195">195</span>
<span id="L196" rel="#L196">196</span>
<span id="L197" rel="#L197">197</span>
<span id="L198" rel="#L198">198</span>
<span id="L199" rel="#L199">199</span>
<span id="L200" rel="#L200">200</span>
<span id="L201" rel="#L201">201</span>
<span id="L202" rel="#L202">202</span>
<span id="L203" rel="#L203">203</span>
<span id="L204" rel="#L204">204</span>
<span id="L205" rel="#L205">205</span>
<span id="L206" rel="#L206">206</span>
<span id="L207" rel="#L207">207</span>
<span id="L208" rel="#L208">208</span>
<span id="L209" rel="#L209">209</span>
</pre>
          </td>
          <td width="100%">
                <div class="highlight"><pre><div class='line' id='LC1'><span class="c"># This script locates the SFML library</span></div><div class='line' id='LC2'><span class="c"># ------------------------------------</span></div><div class='line' id='LC3'><span class="err">#</span></div><div class='line' id='LC4'><span class="c"># Usage</span></div><div class='line' id='LC5'><span class="c"># -----</span></div><div class='line' id='LC6'><span class="err">#</span></div><div class='line' id='LC7'><span class="c"># When you try to locate the SFML libraries, you must specify which modules you want to use (system, window, graphics, network, audio, main).</span></div><div class='line' id='LC8'><span class="c"># If none is given, the SFML_LIBRARIES variable will be empty and you&#39;ll end up linking to nothing.</span></div><div class='line' id='LC9'><span class="c"># example:</span></div><div class='line' id='LC10'><span class="c">#   find_package(SFML COMPONENTS graphics window system) // find the graphics, window and system modules</span></div><div class='line' id='LC11'><span class="err">#</span></div><div class='line' id='LC12'><span class="c"># You can enforce a specific version, either MAJOR.MINOR or only MAJOR.</span></div><div class='line' id='LC13'><span class="c"># If nothing is specified, the version won&#39;t be checked (ie. any version will be accepted).</span></div><div class='line' id='LC14'><span class="c"># example:</span></div><div class='line' id='LC15'><span class="c">#   find_package(SFML COMPONENTS ...)     // no specific version required</span></div><div class='line' id='LC16'><span class="c">#   find_package(SFML 2 COMPONENTS ...)   // any 2.x version</span></div><div class='line' id='LC17'><span class="c">#   find_package(SFML 2.4 COMPONENTS ...) // version 2.4 or greater</span></div><div class='line' id='LC18'><span class="err">#</span></div><div class='line' id='LC19'><span class="c"># By default, the dynamic libraries of SFML will be found. To find the static ones instead,</span></div><div class='line' id='LC20'><span class="c"># you must set the SFML_STATIC_LIBRARIES variable to TRUE before calling find_package(SFML ...).</span></div><div class='line' id='LC21'><span class="c"># In case of static linking, the SFML_STATIC macro will also be defined by this script.</span></div><div class='line' id='LC22'><span class="c"># example:</span></div><div class='line' id='LC23'><span class="c">#   set(SFML_STATIC_LIBRARIES TRUE)</span></div><div class='line' id='LC24'><span class="c">#   find_package(SFML 2 COMPONENTS network system)</span></div><div class='line' id='LC25'><span class="err">#</span></div><div class='line' id='LC26'><span class="c"># On Mac OS X if SFML_STATIC_LIBRARIES is not set to TRUE then by default CMake will search for frameworks unless</span></div><div class='line' id='LC27'><span class="c"># CMAKE_FIND_FRAMEWORK is set to &quot;NEVER&quot; for example. Please refer to CMake documentation for more details.</span></div><div class='line' id='LC28'><span class="c"># Moreover, keep in mind that SFML frameworks are only available as release libraries unlike dylibs which</span></div><div class='line' id='LC29'><span class="c"># are available for both release and debug modes.</span></div><div class='line' id='LC30'><span class="err">#</span></div><div class='line' id='LC31'><span class="c"># If SFML is not installed in a standard path, you can use the SFML_ROOT CMake (or environment) variable</span></div><div class='line' id='LC32'><span class="c"># to tell CMake where SFML is.</span></div><div class='line' id='LC33'><span class="err">#</span></div><div class='line' id='LC34'><span class="c"># Output</span></div><div class='line' id='LC35'><span class="c"># ------</span></div><div class='line' id='LC36'><span class="err">#</span></div><div class='line' id='LC37'><span class="c"># This script defines the following variables:</span></div><div class='line' id='LC38'><span class="c"># - For each specified module XXX (system, window, graphics, network, audio, main):</span></div><div class='line' id='LC39'><span class="c">#   - SFML_XXX_LIBRARY_DEBUG:   the name of the debug library of the xxx module (set to SFML_XXX_LIBRARY_RELEASE is no debug version is found)</span></div><div class='line' id='LC40'><span class="c">#   - SFML_XXX_LIBRARY_RELEASE: the name of the release library of the xxx module (set to SFML_XXX_LIBRARY_DEBUG is no release version is found)</span></div><div class='line' id='LC41'><span class="c">#   - SFML_XXX_LIBRARY:         the name of the library to link to for the xxx module (includes both debug and optimized names if necessary)</span></div><div class='line' id='LC42'><span class="c">#   - SFML_XXX_FOUND:           true if either the debug or release library of the xxx module is found</span></div><div class='line' id='LC43'><span class="c"># - SFML_LIBRARIES:   the list of all libraries corresponding to the required modules</span></div><div class='line' id='LC44'><span class="c"># - SFML_FOUND:       true if all the required modules are found</span></div><div class='line' id='LC45'><span class="c"># - SFML_INCLUDE_DIR: the path where SFML headers are located (the directory containing the SFML/Config.hpp file)</span></div><div class='line' id='LC46'><span class="err">#</span></div><div class='line' id='LC47'><span class="c"># example:</span></div><div class='line' id='LC48'><span class="c">#   find_package(SFML 2 COMPONENTS system window graphics audio REQUIRED)</span></div><div class='line' id='LC49'><span class="c">#   include_directories(${SFML_INCLUDE_DIR})</span></div><div class='line' id='LC50'><span class="c">#   add_executable(myapp ...)</span></div><div class='line' id='LC51'><span class="c">#   target_link_libraries(myapp ${SFML_LIBRARIES})</span></div><div class='line' id='LC52'><br/></div><div class='line' id='LC53'><span class="c"># define the SFML_STATIC macro if static build was chosen</span></div><div class='line' id='LC54'><span class="nb">if</span><span class="p">(</span><span class="s">SFML_STATIC_LIBRARIES</span><span class="p">)</span></div><div class='line' id='LC55'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">add_definitions</span><span class="p">(</span><span class="s">-DSFML_STATIC</span><span class="p">)</span></div><div class='line' id='LC56'><span class="nb">endif</span><span class="p">()</span></div><div class='line' id='LC57'><br/></div><div class='line' id='LC58'><span class="c"># deduce the libraries suffix from the options</span></div><div class='line' id='LC59'><span class="nb">set</span><span class="p">(</span><span class="s">FIND_SFML_LIB_SUFFIX</span> <span class="s2">&quot;&quot;</span><span class="p">)</span></div><div class='line' id='LC60'><span class="nb">if</span><span class="p">(</span><span class="s">SFML_STATIC_LIBRARIES</span><span class="p">)</span></div><div class='line' id='LC61'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">set</span><span class="p">(</span><span class="s">FIND_SFML_LIB_SUFFIX</span> <span class="s2">&quot;${FIND_SFML_LIB_SUFFIX}-s&quot;</span><span class="p">)</span></div><div class='line' id='LC62'><span class="nb">endif</span><span class="p">()</span></div><div class='line' id='LC63'><br/></div><div class='line' id='LC64'><span class="c"># find the SFML include directory</span></div><div class='line' id='LC65'><span class="nb">find_path</span><span class="p">(</span><span class="s">SFML_INCLUDE_DIR</span> <span class="s">SFML/Config.hpp</span></div><div class='line' id='LC66'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">PATH_SUFFIXES</span> <span class="s">include</span></div><div class='line' id='LC67'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">PATHS</span></div><div class='line' id='LC68'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">${</span><span class="nv">SFML_ROOT</span><span class="o">}</span></div><div class='line' id='LC69'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="err">$</span><span class="s">ENV{SFML_ROOT}</span></div><div class='line' id='LC70'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">~/Library/Frameworks</span></div><div class='line' id='LC71'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">/Library/Frameworks</span></div><div class='line' id='LC72'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">/usr/local/</span></div><div class='line' id='LC73'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">/usr/</span></div><div class='line' id='LC74'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">/sw</span>          <span class="c"># Fink</span></div><div class='line' id='LC75'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">/opt/local/</span>  <span class="c"># DarwinPorts</span></div><div class='line' id='LC76'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">/opt/csw/</span>    <span class="c"># Blastwave</span></div><div class='line' id='LC77'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">/opt/</span><span class="p">)</span></div><div class='line' id='LC78'><br/></div><div class='line' id='LC79'><span class="c"># check the version number</span></div><div class='line' id='LC80'><span class="nb">set</span><span class="p">(</span><span class="s">SFML_VERSION_OK</span> <span class="s">TRUE</span><span class="p">)</span></div><div class='line' id='LC81'><span class="nb">if</span><span class="p">(</span><span class="s">SFML_FIND_VERSION</span> <span class="s">AND</span> <span class="s">SFML_INCLUDE_DIR</span><span class="p">)</span></div><div class='line' id='LC82'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c"># extract the major and minor version numbers from SFML/Config.hpp</span></div><div class='line' id='LC83'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c"># we have to handle framework a little bit differently :</span></div><div class='line' id='LC84'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">if</span><span class="p">(</span><span class="s2">&quot;${SFML_INCLUDE_DIR}&quot;</span> <span class="s">MATCHES</span> <span class="s2">&quot;SFML.framework&quot;</span><span class="p">)</span></div><div class='line' id='LC85'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">set</span><span class="p">(</span><span class="s">SFML_CONFIG_HPP_INPUT</span> <span class="s2">&quot;${SFML_INCLUDE_DIR}/Headers/Config.hpp&quot;</span><span class="p">)</span></div><div class='line' id='LC86'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">else</span><span class="p">()</span></div><div class='line' id='LC87'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">set</span><span class="p">(</span><span class="s">SFML_CONFIG_HPP_INPUT</span> <span class="s2">&quot;${SFML_INCLUDE_DIR}/SFML/Config.hpp&quot;</span><span class="p">)</span></div><div class='line' id='LC88'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">endif</span><span class="p">()</span></div><div class='line' id='LC89'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">FILE</span><span class="p">(</span><span class="s">READ</span> <span class="s2">&quot;${SFML_CONFIG_HPP_INPUT}&quot;</span> <span class="s">SFML_CONFIG_HPP_CONTENTS</span><span class="p">)</span></div><div class='line' id='LC90'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">STRING</span><span class="p">(</span><span class="s">REGEX</span> <span class="s">MATCH</span> <span class="s2">&quot;.*#define SFML_VERSION_MAJOR ([0-9]+).*#define SFML_VERSION_MINOR ([0-9]+).*&quot;</span> <span class="s">SFML_CONFIG_HPP_CONTENTS</span> <span class="s2">&quot;${SFML_CONFIG_HPP_CONTENTS}&quot;</span><span class="p">)</span></div><div class='line' id='LC91'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">STRING</span><span class="p">(</span><span class="s">REGEX</span> <span class="s">REPLACE</span> <span class="s2">&quot;.*#define SFML_VERSION_MAJOR ([0-9]+).*&quot;</span> <span class="s2">&quot;\\1&quot;</span> <span class="s">SFML_VERSION_MAJOR</span> <span class="s2">&quot;${SFML_CONFIG_HPP_CONTENTS}&quot;</span><span class="p">)</span></div><div class='line' id='LC92'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">STRING</span><span class="p">(</span><span class="s">REGEX</span> <span class="s">REPLACE</span> <span class="s2">&quot;.*#define SFML_VERSION_MINOR ([0-9]+).*&quot;</span> <span class="s2">&quot;\\1&quot;</span> <span class="s">SFML_VERSION_MINOR</span> <span class="s2">&quot;${SFML_CONFIG_HPP_CONTENTS}&quot;</span><span class="p">)</span></div><div class='line' id='LC93'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">math</span><span class="p">(</span><span class="s">EXPR</span> <span class="s">SFML_REQUESTED_VERSION</span> <span class="s2">&quot;${SFML_FIND_VERSION_MAJOR} * 10 + ${SFML_FIND_VERSION_MINOR}&quot;</span><span class="p">)</span></div><div class='line' id='LC94'><br/></div><div class='line' id='LC95'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c"># if we could extract them, compare with the requested version number</span></div><div class='line' id='LC96'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">if</span> <span class="p">(</span><span class="s">SFML_VERSION_MAJOR</span><span class="p">)</span></div><div class='line' id='LC97'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c"># transform version numbers to an integer</span></div><div class='line' id='LC98'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">math</span><span class="p">(</span><span class="s">EXPR</span> <span class="s">SFML_VERSION</span> <span class="s2">&quot;${SFML_VERSION_MAJOR} * 10 + ${SFML_VERSION_MINOR}&quot;</span><span class="p">)</span></div><div class='line' id='LC99'><br/></div><div class='line' id='LC100'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c"># compare them</span></div><div class='line' id='LC101'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">if</span><span class="p">(</span><span class="s">SFML_VERSION</span> <span class="s">LESS</span> <span class="s">SFML_REQUESTED_VERSION</span><span class="p">)</span></div><div class='line' id='LC102'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">set</span><span class="p">(</span><span class="s">SFML_VERSION_OK</span> <span class="s">FALSE</span><span class="p">)</span></div><div class='line' id='LC103'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">endif</span><span class="p">()</span></div><div class='line' id='LC104'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">else</span><span class="p">()</span></div><div class='line' id='LC105'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c"># SFML version is &lt; 2.0</span></div><div class='line' id='LC106'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">if</span> <span class="p">(</span><span class="s">SFML_REQUESTED_VERSION</span> <span class="s">GREATER</span> <span class="s">19</span><span class="p">)</span></div><div class='line' id='LC107'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">set</span><span class="p">(</span><span class="s">SFML_VERSION_OK</span> <span class="s">FALSE</span><span class="p">)</span></div><div class='line' id='LC108'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">set</span><span class="p">(</span><span class="s">SFML_VERSION_MAJOR</span> <span class="s">1</span><span class="p">)</span></div><div class='line' id='LC109'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">set</span><span class="p">(</span><span class="s">SFML_VERSION_MINOR</span> <span class="s">x</span><span class="p">)</span></div><div class='line' id='LC110'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">endif</span><span class="p">()</span></div><div class='line' id='LC111'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">endif</span><span class="p">()</span></div><div class='line' id='LC112'><span class="nb">endif</span><span class="p">()</span></div><div class='line' id='LC113'><br/></div><div class='line' id='LC114'><span class="c"># find the requested modules</span></div><div class='line' id='LC115'><span class="nb">set</span><span class="p">(</span><span class="s">SFML_FOUND</span> <span class="s">TRUE</span><span class="p">)</span> <span class="c"># will be set to false if one of the required modules is not found</span></div><div class='line' id='LC116'><span class="nb">set</span><span class="p">(</span><span class="s">FIND_SFML_LIB_PATHS</span></div><div class='line' id='LC117'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">${</span><span class="nv">SFML_ROOT</span><span class="o">}</span></div><div class='line' id='LC118'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="err">$</span><span class="s">ENV{SFML_ROOT}</span></div><div class='line' id='LC119'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">~/Library/Frameworks</span></div><div class='line' id='LC120'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">/Library/Frameworks</span></div><div class='line' id='LC121'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">/usr/local</span></div><div class='line' id='LC122'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">/usr</span></div><div class='line' id='LC123'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">/sw</span></div><div class='line' id='LC124'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">/opt/local</span></div><div class='line' id='LC125'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">/opt/csw</span></div><div class='line' id='LC126'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">/opt</span><span class="p">)</span></div><div class='line' id='LC127'><span class="nb">foreach</span><span class="p">(</span><span class="s">FIND_SFML_COMPONENT</span> <span class="o">${</span><span class="nv">SFML_FIND_COMPONENTS</span><span class="o">}</span><span class="p">)</span></div><div class='line' id='LC128'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">string</span><span class="p">(</span><span class="s">TOLOWER</span> <span class="o">${</span><span class="nv">FIND_SFML_COMPONENT</span><span class="o">}</span> <span class="s">FIND_SFML_COMPONENT_LOWER</span><span class="p">)</span></div><div class='line' id='LC129'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">string</span><span class="p">(</span><span class="s">TOUPPER</span> <span class="o">${</span><span class="nv">FIND_SFML_COMPONENT</span><span class="o">}</span> <span class="s">FIND_SFML_COMPONENT_UPPER</span><span class="p">)</span></div><div class='line' id='LC130'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">set</span><span class="p">(</span><span class="s">FIND_SFML_COMPONENT_NAME</span> <span class="s">sfml-</span><span class="o">${</span><span class="nv">FIND_SFML_COMPONENT_LOWER</span><span class="o">}${</span><span class="nv">FIND_SFML_LIB_SUFFIX</span><span class="o">}</span><span class="p">)</span></div><div class='line' id='LC131'><br/></div><div class='line' id='LC132'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c"># no suffix for sfml-main, it is always a static library</span></div><div class='line' id='LC133'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">if</span><span class="p">(</span><span class="s">FIND_SFML_COMPONENT_LOWER</span> <span class="s">STREQUAL</span> <span class="s2">&quot;main&quot;</span><span class="p">)</span></div><div class='line' id='LC134'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">set</span><span class="p">(</span><span class="s">FIND_SFML_COMPONENT_NAME</span> <span class="s">sfml-</span><span class="o">${</span><span class="nv">FIND_SFML_COMPONENT_LOWER</span><span class="o">}</span><span class="p">)</span></div><div class='line' id='LC135'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">endif</span><span class="p">()</span></div><div class='line' id='LC136'><br/></div><div class='line' id='LC137'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c"># debug library</span></div><div class='line' id='LC138'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">find_library</span><span class="p">(</span><span class="s">SFML_</span><span class="o">${</span><span class="nv">FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_LIBRARY_DEBUG</span></div><div class='line' id='LC139'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">NAMES</span> <span class="o">${</span><span class="nv">FIND_SFML_COMPONENT_NAME</span><span class="o">}</span><span class="s">-d</span></div><div class='line' id='LC140'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">PATH_SUFFIXES</span> <span class="s">lib64</span> <span class="s">lib</span></div><div class='line' id='LC141'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">PATHS</span> <span class="o">${</span><span class="nv">FIND_SFML_LIB_PATHS</span><span class="o">}</span><span class="p">)</span></div><div class='line' id='LC142'><br/></div><div class='line' id='LC143'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c"># release library</span></div><div class='line' id='LC144'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">find_library</span><span class="p">(</span><span class="s">SFML_</span><span class="o">${</span><span class="nv">FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_LIBRARY_RELEASE</span></div><div class='line' id='LC145'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">NAMES</span> <span class="o">${</span><span class="nv">FIND_SFML_COMPONENT_NAME</span><span class="o">}</span></div><div class='line' id='LC146'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">PATH_SUFFIXES</span> <span class="s">lib64</span> <span class="s">lib</span></div><div class='line' id='LC147'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">PATHS</span> <span class="o">${</span><span class="nv">FIND_SFML_LIB_PATHS</span><span class="o">}</span><span class="p">)</span></div><div class='line' id='LC148'><br/></div><div class='line' id='LC149'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">if</span> <span class="p">(</span><span class="s">SFML_</span><span class="o">${</span><span class="nv">FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_LIBRARY_DEBUG</span> <span class="s">OR</span> <span class="s">SFML_</span><span class="o">${</span><span class="nv">FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_LIBRARY_RELEASE</span><span class="p">)</span></div><div class='line' id='LC150'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c"># library found</span></div><div class='line' id='LC151'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">set</span><span class="p">(</span><span class="s">SFML_</span><span class="o">${</span><span class="nv">FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_FOUND</span> <span class="s">TRUE</span><span class="p">)</span></div><div class='line' id='LC152'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div><div class='line' id='LC153'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c"># if both are found, set SFML_XXX_LIBRARY to contain both</span></div><div class='line' id='LC154'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">if</span> <span class="p">(</span><span class="s">SFML_</span><span class="o">${</span><span class="nv">FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_LIBRARY_DEBUG</span> <span class="s">AND</span> <span class="s">SFML_</span><span class="o">${</span><span class="nv">FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_LIBRARY_RELEASE</span><span class="p">)</span></div><div class='line' id='LC155'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">set</span><span class="p">(</span><span class="s">SFML_</span><span class="o">${</span><span class="nv">FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_LIBRARY</span> <span class="s">debug</span>     <span class="o">${</span><span class="nv">SFML_${FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_LIBRARY_DEBUG}</span></div><div class='line' id='LC156'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">optimized</span> <span class="o">${</span><span class="nv">SFML_${FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_LIBRARY_RELEASE}</span><span class="p">)</span></div><div class='line' id='LC157'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">endif</span><span class="p">()</span></div><div class='line' id='LC158'><br/></div><div class='line' id='LC159'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c"># if only one debug/release variant is found, set the other to be equal to the found one</span></div><div class='line' id='LC160'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">if</span> <span class="p">(</span><span class="s">SFML_</span><span class="o">${</span><span class="nv">FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_LIBRARY_DEBUG</span> <span class="s">AND</span> <span class="s">NOT</span> <span class="s">SFML_</span><span class="o">${</span><span class="nv">FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_LIBRARY_RELEASE</span><span class="p">)</span></div><div class='line' id='LC161'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c"># debug and not release</span></div><div class='line' id='LC162'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">set</span><span class="p">(</span><span class="s">SFML_</span><span class="o">${</span><span class="nv">FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_LIBRARY_RELEASE</span> <span class="o">${</span><span class="nv">SFML_${FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_LIBRARY_DEBUG}</span><span class="p">)</span></div><div class='line' id='LC163'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">set</span><span class="p">(</span><span class="s">SFML_</span><span class="o">${</span><span class="nv">FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_LIBRARY</span>         <span class="o">${</span><span class="nv">SFML_${FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_LIBRARY_DEBUG}</span><span class="p">)</span></div><div class='line' id='LC164'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">endif</span><span class="p">()</span></div><div class='line' id='LC165'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">if</span> <span class="p">(</span><span class="s">SFML_</span><span class="o">${</span><span class="nv">FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_LIBRARY_RELEASE</span> <span class="s">AND</span> <span class="s">NOT</span> <span class="s">SFML_</span><span class="o">${</span><span class="nv">FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_LIBRARY_DEBUG</span><span class="p">)</span></div><div class='line' id='LC166'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c"># release and not debug</span></div><div class='line' id='LC167'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">set</span><span class="p">(</span><span class="s">SFML_</span><span class="o">${</span><span class="nv">FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_LIBRARY_DEBUG</span> <span class="o">${</span><span class="nv">SFML_${FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_LIBRARY_RELEASE}</span><span class="p">)</span></div><div class='line' id='LC168'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">set</span><span class="p">(</span><span class="s">SFML_</span><span class="o">${</span><span class="nv">FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_LIBRARY</span>       <span class="o">${</span><span class="nv">SFML_${FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_LIBRARY_RELEASE}</span><span class="p">)</span></div><div class='line' id='LC169'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">endif</span><span class="p">()</span></div><div class='line' id='LC170'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">else</span><span class="p">()</span></div><div class='line' id='LC171'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c"># library not found</span></div><div class='line' id='LC172'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">set</span><span class="p">(</span><span class="s">SFML_FOUND</span> <span class="s">FALSE</span><span class="p">)</span></div><div class='line' id='LC173'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">set</span><span class="p">(</span><span class="s">SFML_</span><span class="o">${</span><span class="nv">FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_FOUND</span> <span class="s">FALSE</span><span class="p">)</span></div><div class='line' id='LC174'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">set</span><span class="p">(</span><span class="s">SFML_</span><span class="o">${</span><span class="nv">FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_LIBRARY</span> <span class="s2">&quot;&quot;</span><span class="p">)</span></div><div class='line' id='LC175'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">set</span><span class="p">(</span><span class="s">FIND_SFML_MISSING</span> <span class="s2">&quot;${FIND_SFML_MISSING} SFML_${FIND_SFML_COMPONENT_UPPER}_LIBRARY&quot;</span><span class="p">)</span></div><div class='line' id='LC176'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">endif</span><span class="p">()</span></div><div class='line' id='LC177'><br/></div><div class='line' id='LC178'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c"># mark as advanced</span></div><div class='line' id='LC179'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">MARK_AS_ADVANCED</span><span class="p">(</span><span class="s">SFML_</span><span class="o">${</span><span class="nv">FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_LIBRARY</span></div><div class='line' id='LC180'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">SFML_</span><span class="o">${</span><span class="nv">FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_LIBRARY_RELEASE</span></div><div class='line' id='LC181'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">SFML_</span><span class="o">${</span><span class="nv">FIND_SFML_COMPONENT_UPPER</span><span class="o">}</span><span class="s">_LIBRARY_DEBUG</span><span class="p">)</span></div><div class='line' id='LC182'><br/></div><div class='line' id='LC183'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c"># add to the global list of libraries</span></div><div class='line' id='LC184'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">set</span><span class="p">(</span><span class="s">SFML_LIBRARIES</span> <span class="o">${</span><span class="nv">SFML_LIBRARIES</span><span class="o">}</span> <span class="s2">&quot;${SFML_${FIND_SFML_COMPONENT_UPPER}_LIBRARY}&quot;</span><span class="p">)</span></div><div class='line' id='LC185'><span class="nb">endforeach</span><span class="p">()</span></div><div class='line' id='LC186'><br/></div><div class='line' id='LC187'><span class="c"># handle errors</span></div><div class='line' id='LC188'><span class="nb">if</span><span class="p">(</span><span class="s">NOT</span> <span class="s">SFML_VERSION_OK</span><span class="p">)</span></div><div class='line' id='LC189'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c"># SFML version not ok</span></div><div class='line' id='LC190'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">set</span><span class="p">(</span><span class="s">FIND_SFML_ERROR</span> <span class="s2">&quot;SFML found but version too low (requested: ${SFML_FIND_VERSION}, found: ${SFML_VERSION_MAJOR}.${SFML_VERSION_MINOR})&quot;</span><span class="p">)</span></div><div class='line' id='LC191'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">set</span><span class="p">(</span><span class="s">SFML_FOUND</span> <span class="s">FALSE</span><span class="p">)</span></div><div class='line' id='LC192'><span class="nb">elseif</span><span class="p">(</span><span class="s">NOT</span> <span class="s">SFML_FOUND</span><span class="p">)</span></div><div class='line' id='LC193'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c"># include directory or library not found</span></div><div class='line' id='LC194'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">set</span><span class="p">(</span><span class="s">FIND_SFML_ERROR</span> <span class="s2">&quot;Could NOT find SFML (missing: ${FIND_SFML_MISSING})&quot;</span><span class="p">)</span></div><div class='line' id='LC195'><span class="nb">endif</span><span class="p">()</span></div><div class='line' id='LC196'><span class="nb">if</span> <span class="p">(</span><span class="s">NOT</span> <span class="s">SFML_FOUND</span><span class="p">)</span></div><div class='line' id='LC197'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">if</span><span class="p">(</span><span class="s">SFML_FIND_REQUIRED</span><span class="p">)</span></div><div class='line' id='LC198'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c"># fatal error</span></div><div class='line' id='LC199'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">message</span><span class="p">(</span><span class="s">FATAL_ERROR</span> <span class="o">${</span><span class="nv">FIND_SFML_ERROR</span><span class="o">}</span><span class="p">)</span></div><div class='line' id='LC200'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">elseif</span><span class="p">(</span><span class="s">NOT</span> <span class="s">SFML_FIND_QUIETLY</span><span class="p">)</span></div><div class='line' id='LC201'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c"># error but continue</span></div><div class='line' id='LC202'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">message</span><span class="p">(</span><span class="s2">&quot;${FIND_SFML_ERROR}&quot;</span><span class="p">)</span></div><div class='line' id='LC203'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">endif</span><span class="p">()</span></div><div class='line' id='LC204'><span class="nb">endif</span><span class="p">()</span></div><div class='line' id='LC205'><br/></div><div class='line' id='LC206'><span class="c"># handle success</span></div><div class='line' id='LC207'><span class="nb">if</span><span class="p">(</span><span class="s">SFML_FOUND</span><span class="p">)</span></div><div class='line' id='LC208'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nb">message</span><span class="p">(</span><span class="s">STATUS</span> <span class="s2">&quot;Found SFML ${SFML_VERSION_MAJOR}.${SFML_VERSION_MINOR} in ${SFML_INCLUDE_DIR}&quot;</span><span class="p">)</span></div><div class='line' id='LC209'><span class="nb">endif</span><span class="p">()</span></div></pre></div>
          </td>
        </tr>
      </table>
  </div>

          </div>
        </div>

        <a href="#jump-to-line" rel="facebox" data-hotkey="l" class="js-jump-to-line" style="display:none">Jump to Line</a>
        <div id="jump-to-line" style="display:none">
          <h2>Jump to Line</h2>
          <form accept-charset="UTF-8" class="js-jump-to-line-form">
            <input class="textfield js-jump-to-line-field" type="text">
            <div class="full-button">
              <button type="submit" class="button">Go</button>
            </div>
          </form>
        </div>

      </div>
    </div>
</div>

<div id="js-frame-loading-template" class="frame frame-loading large-loading-area" style="display:none;">
  <img class="js-frame-loading-spinner" src="https://a248.e.akamai.net/assets.github.com/images/spinners/octocat-spinner-128.gif?1347543527" height="64" width="64">
</div>


        </div>
      </div>
      <div class="context-overlay"></div>
    </div>

      <div id="footer-push"></div><!-- hack for sticky footer -->
    </div><!-- end of wrapper - hack for sticky footer -->

      <!-- footer -->
      <div id="footer">
  <div class="container clearfix">

      <dl class="footer_nav">
        <dt>GitHub</dt>
        <dd><a href="https://github.com/about">About us</a></dd>
        <dd><a href="https://github.com/blog">Blog</a></dd>
        <dd><a href="https://github.com/contact">Contact &amp; support</a></dd>
        <dd><a href="http://enterprise.github.com/">GitHub Enterprise</a></dd>
        <dd><a href="http://status.github.com/">Site status</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Applications</dt>
        <dd><a href="http://mac.github.com/">GitHub for Mac</a></dd>
        <dd><a href="http://windows.github.com/">GitHub for Windows</a></dd>
        <dd><a href="http://eclipse.github.com/">GitHub for Eclipse</a></dd>
        <dd><a href="http://mobile.github.com/">GitHub mobile apps</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Services</dt>
        <dd><a href="http://get.gaug.es/">Gauges: Web analytics</a></dd>
        <dd><a href="http://speakerdeck.com">Speaker Deck: Presentations</a></dd>
        <dd><a href="https://gist.github.com">Gist: Code snippets</a></dd>
        <dd><a href="http://jobs.github.com/">Job board</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Documentation</dt>
        <dd><a href="http://help.github.com/">GitHub Help</a></dd>
        <dd><a href="http://developer.github.com/">Developer API</a></dd>
        <dd><a href="http://github.github.com/github-flavored-markdown/">GitHub Flavored Markdown</a></dd>
        <dd><a href="http://pages.github.com/">GitHub Pages</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>More</dt>
        <dd><a href="http://training.github.com/">Training</a></dd>
        <dd><a href="https://github.com/edu">Students &amp; teachers</a></dd>
        <dd><a href="http://shop.github.com">The Shop</a></dd>
        <dd><a href="/plans">Plans &amp; pricing</a></dd>
        <dd><a href="http://octodex.github.com/">The Octodex</a></dd>
      </dl>

      <hr class="footer-divider">


    <p class="right">&copy; 2013 <span title="0.13001s from fe2.rs.github.com">GitHub</span> Inc. All rights reserved.</p>
    <a class="left" href="https://github.com/">
      <span class="mega-icon mega-icon-invertocat"></span>
    </a>
    <ul id="legal">
        <li><a href="https://github.com/site/terms">Terms of Service</a></li>
        <li><a href="https://github.com/site/privacy">Privacy</a></li>
        <li><a href="https://github.com/security">Security</a></li>
    </ul>

  </div><!-- /.container -->

</div><!-- /.#footer -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-fullscreen-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="js-fullscreen-contents" placeholder="" data-suggester="fullscreen_suggester"></textarea>
          <div class="suggester-container">
              <div class="suggester fullscreen-suggester js-navigation-container" id="fullscreen_suggester"
                 data-url="/LaurentGomila/SFML/suggestions/commit/e75045358e88c8655379bc20d39d9fa26b87144a">
              </div>
          </div>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped leftwards" title="Exit Zen Mode">
      <span class="mega-icon mega-icon-normalscreen"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped leftwards"
      title="Switch themes">
      <span class="mini-icon mini-icon-brightness"></span>
    </a>
  </div>
</div>


    

<div id="keyboard_shortcuts_pane" class="instapaper_ignore readability-extra" style="display:none">
  <h2>Keyboard Shortcuts <small><a href="#" class="js-see-all-keyboard-shortcuts">(see all)</a></small></h2>

  <div class="columns threecols">
    <div class="column first">
      <h3>Site wide shortcuts</h3>
      <dl class="keyboard-mappings">
        <dt>s</dt>
        <dd>Focus command bar</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>?</dt>
        <dd>Bring up this help dialog</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column middle" style='display:none'>
      <h3>Commit list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selection down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selection up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>c <em>or</em> o <em>or</em> enter</dt>
        <dd>Open commit</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>y</dt>
        <dd>Expand URL to its canonical form</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column last js-hidden-pane" style='display:none'>
      <h3>Pull request list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selection down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selection up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>o <em>or</em> enter</dt>
        <dd>Open issue</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> enter</dt>
        <dd>Submit comment</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> shift p</dt>
        <dd>Preview comment</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> shift l</dt>
        <dd>Go fullscreen</dd>
      </dl>
    </div><!-- /.columns.last -->

  </div><!-- /.columns.equacols -->

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>

    <h3>Issues</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>x</dt>
          <dd>Toggle selection</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> enter</dt>
          <dd>Submit comment</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> shift p</dt>
          <dd>Preview comment</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> shift l</dt>
          <dd>Go fullscreen</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>c</dt>
          <dd>Create issue</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Create label</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>i</dt>
          <dd>Back to inbox</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>u</dt>
          <dd>Back to issues</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>/</dt>
          <dd>Focus issues search</dd>
        </dl>
      </div>
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>

    <h3>Issues Dashboard</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
      </div><!-- /.column.first -->
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>

    <h3>Network Graph</h3>
    <div class="columns equacols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt><span class="badmono">←</span> <em>or</em> h</dt>
          <dd>Scroll left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">→</span> <em>or</em> l</dt>
          <dd>Scroll right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↑</span> <em>or</em> k</dt>
          <dd>Scroll up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↓</span> <em>or</em> j</dt>
          <dd>Scroll down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Toggle visibility of head labels</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">←</span> <em>or</em> shift h</dt>
          <dd>Scroll all the way left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">→</span> <em>or</em> shift l</dt>
          <dd>Scroll all the way right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↑</span> <em>or</em> shift k</dt>
          <dd>Scroll all the way up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↓</span> <em>or</em> shift j</dt>
          <dd>Scroll all the way down</dd>
        </dl>
      </div><!-- /.column.last -->
    </div>
  </div>

  <div class="js-hidden-pane" >
    <div class="rule"></div>
    <div class="columns threecols">
      <div class="column first js-hidden-pane" >
        <h3>Source Code Browsing</h3>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Activates the file finder</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Jump to line</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>w</dt>
          <dd>Switch branch/tag</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Expand URL to its canonical form</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>i</dt>
          <dd>Show/hide all inline notes</dd>
      </div>
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>
    <div class="columns threecols">
      <div class="column first">
        <h3>Browsing Commits</h3>
        <dl class="keyboard-mappings">
          <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> enter</dt>
          <dd>Submit comment</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>escape</dt>
          <dd>Close form</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>p</dt>
          <dd>Parent commit</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o</dt>
          <dd>Other parent commit</dd>
        </dl>
      </div>
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>
    <h3>Notifications</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open notification</dd>
        </dl>
      </div><!-- /.column.first -->

      <div class="column second">
        <dl class="keyboard-mappings">
          <dt>e <em>or</em> shift i <em>or</em> y</dt>
          <dd>Mark as read</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift m</dt>
          <dd>Mute thread</dd>
        </dl>
      </div><!-- /.column.first -->
    </div>
  </div>

</div>

    <div id="markdown-help" class="instapaper_ignore readability-extra">
  <h2>Markdown Cheat Sheet</h2>

  <div class="cheatsheet-content">

  <div class="mod">
    <div class="col">
      <h3>Format Text</h3>
      <p>Headers</p>
      <pre>
# This is an &lt;h1&gt; tag
## This is an &lt;h2&gt; tag
###### This is an &lt;h6&gt; tag</pre>
     <p>Text styles</p>
     <pre>
*This text will be italic*
_This will also be italic_
**This text will be bold**
__This will also be bold__

*You **can** combine them*
</pre>
    </div>
    <div class="col">
      <h3>Lists</h3>
      <p>Unordered</p>
      <pre>
* Item 1
* Item 2
  * Item 2a
  * Item 2b</pre>
     <p>Ordered</p>
     <pre>
1. Item 1
2. Item 2
3. Item 3
   * Item 3a
   * Item 3b</pre>
    </div>
    <div class="col">
      <h3>Miscellaneous</h3>
      <p>Images</p>
      <pre>
![GitHub Logo](/images/logo.png)
Format: ![Alt Text](url)
</pre>
     <p>Links</p>
     <pre>
http://github.com - automatic!
[GitHub](http://github.com)</pre>
<p>Blockquotes</p>
     <pre>
As Kanye West said:

> We're living the future so
> the present is our past.
</pre>
    </div>
  </div>
  <div class="rule"></div>

  <h3>Code Examples in Markdown</h3>
  <div class="col">
      <p>Syntax highlighting with <a href="http://github.github.com/github-flavored-markdown/" title="GitHub Flavored Markdown" target="_blank">GFM</a></p>
      <pre>
```javascript
function fancyAlert(arg) {
  if(arg) {
    $.facebox({div:'#foo'})
  }
}
```</pre>
    </div>
    <div class="col">
      <p>Or, indent your code 4 spaces</p>
      <pre>
Here is a Python code example
without syntax highlighting:

    def foo:
      if not bar:
        return true</pre>
    </div>
    <div class="col">
      <p>Inline code for comments</p>
      <pre>
I think you should use an
`&lt;addr&gt;` element here instead.</pre>
    </div>
  </div>

  </div>
</div>


    <div id="ajax-error-message" class="flash flash-error">
      <span class="mini-icon mini-icon-exclamation"></span>
      Something went wrong with that request. Please try again.
      <a href="#" class="mini-icon mini-icon-remove-close ajax-error-dismiss"></a>
    </div>

    
    
    <span id='server_response_time' data-time='0.13160' data-host='fe2'></span>
    
  </body>
</html>

